#include <ncurses.h>
#include <iostream>
#include <list>
using namespace std;
int main() {
  char ch;
  list<char> List;
  initscr();
  noecho();
  while ((ch = getch()) != 'q') {
    List.push_back(ch);
    erase();
    //clear();
    printw("%c", ch);
    refresh();
  }
  for (auto ptr = List.rbegin(); ptr != List.rend(); ptr++) {
    std::cout << *ptr << " ";
  }
  getch();
  endwin();
  return 0;
}