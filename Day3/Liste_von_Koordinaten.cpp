#include <iostream>
#include <cstdlib>
#include<ctime>
#include <list>
using namespace std;
struct coord {
  float x = -1.0;
  float y = -1.0;
  coord(float x_, float y_) : x(x_), y(y_) {};
};
void delcoords(list<coord> &koordination) {
  for (auto iter = koordination.begin(); iter != koordination.end();) {
    auto previous_iter = koordination.begin();
    if (iter->x < iter->y) {
      iter = koordination.erase(iter);
      //iter = koordination.begin();
    } else {
      ++iter;
    }

  }
}
void printlist(list<coord> *koordination) {
  for (auto itr = koordination->begin(); itr != koordination->end(); ++itr) {
    std::cout << "X: " << itr->x << ", Y: " << itr->y << "\n";
  }
}
int main() {
  srand(time(nullptr));
  const unsigned int length = 8;
  list<coord> list1;
  // test_list = {coord(1, 2), coord(5, 3), coord(1, 3), coord(0, 0)};
  for (int i = 0; i < length; ++i) {
    list1.push_back(coord(rand() % 100, rand() % 100));
  }
  list<coord> backup_list(list1);
  // list<coord> test_list = {coord(1, 2), coord(5, 3), coord(1, 3), coord(0, 0)};
  std::cout << "before:" << "\n";
  printlist(&backup_list);
  delcoords(list1);
  std::cout << "After" << "\n";
  printlist(&list1);

  return 0;
}