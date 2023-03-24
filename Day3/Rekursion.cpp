//
// Created by zengx on 2023/3/18.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
double factorialIter(int x) {
  double result;
  if (x < 2)
    result = 1;
  else {
    result = x;
    while (x > 1) {
      result = result * (x - 1);
      x--;
    }
  }
  return result;

}
double factorialRec(int x) {
  if (x > 1)
    return x * factorialRec(x - 1);
  else
    return 1;
}
int main() {
  vector<int> test_collection{-3, -2, -1, 0, 1, 2, 3, 4, 5};
  for (const auto &elem : test_collection) {
    std::cout << elem << "!= " << "";
    cout << factorialRec(elem) << ";";
    cout << factorialIter(elem) << "\n";
  }
  return 0;
}