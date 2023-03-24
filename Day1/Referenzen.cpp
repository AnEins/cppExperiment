//
// Created by ZENGXIN JIAO on 16.03.23.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
void swap(double &num1, double &num2) {
  auto temp = 0;
  temp = num1;
  num1 = num2;
  num2 = temp;

}
int main() {
  double a = 2;
  double b = 3;
  std::cout << "a: " << a << "\tb: " << b << "\n";
  swap(a, b);
  std::cout << "a: " << a << "\tb: " << b << "\n";
  return 0;
}