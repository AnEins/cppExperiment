//
// Created by ZENGXIN JIAO on 16.03.23.
//
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
  //int iStack[100000000];
  // "segmentation violation" or a "segfault".
  //Algorithmus…
  //int *iStack = new int[100000000];

  srand(time(nullptr));
  int max = 100, min = 0;
  const int size = 100000;
  int *iStack = new int[size];
  int counter = 0;
  for (size_t i = 0; i < size; ++i) {
    iStack[i] = rand() % (max - min + 1) + min;
    if (iStack[i] % 13 == 0) {
      counter++;
      //std::cout <<iStack[i] << " ";
    }
  }
  std::cout << counter << "\n";
  delete[] iStack;
  return 0;
}