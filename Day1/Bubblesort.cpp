//
// Created by ZENGXIN JIAO on 16.03.23.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void swap(double &num1, double &num2) {
  auto temp = 0;
  temp = num1;
  num1 = num2;
  num2 = temp;
}
void bubblesort(int arr[], const int size) {
  for (int j = 0; j < size - 1; ++j) {
    for (int i = 0; i < size - j - 1; ++i) {
      if (arr[i] > arr[i + 1]) {
        //std::cout << "before swap" << arr[i] << arr[i + 1] << "\n";
        swap(arr[i], arr[i + 1]);
        //std::cout << "after swap" << arr[i] << arr[i + 1] << "\n";
      }
    }
  }
}
int main() {
  const int size = 10;
  int *arr = new int[size];
  const int max = 100, min = 0;
  srand(time(nullptr));
  for (int i = 0; i < size; ++i) {
    arr[i] = rand() % (max - min + 1) + min;
    //std::cout << "" << arr[i] << "\n";
  }
  //int arr[size] = {1, 3, 9, 7, 5, 8, 4, 2, 6, 10};
  cout << "Before sorting: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  bubblesort(arr, size);
  cout << endl << "After sorting: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  // delete[]arr;
  return 0;
}