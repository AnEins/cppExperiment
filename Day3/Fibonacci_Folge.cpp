//
// Created by zengx on 2023/3/18.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
unsigned int fibonacci(int x) {
  unsigned int result = 0;
  if (x < 0) {
    cerr << "Error: Input smaller than zero.";
    return -1;
  }
  if (x < 2)
    result = x;
  else {
    result = fibonacci(x - 1) + fibonacci(x - 2);
  }
  return result;
}
int main() {

  vector<int> test_collection{-0, 1, 2, 3, 4, 5, 6, 7};
  //1,1,2,3,5,8,13
  for (const auto &elem : test_collection) {
    std::cout << elem << "-te Fibonacci: " << fibonacci(elem) << endl;
  }

  return 0;
}