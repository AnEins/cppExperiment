//
// Created by ZENGXIN JIAO on 16.03.23.
//
#include <iostream>
#include <cmath>
using namespace std;
bool root_finding(double a, double b, double c, double *root1, double *root2) {
  const double diskriminante = b * b - 4 * a * c;
  bool solveable = false;
  diskriminante < 0 ? solveable = false : solveable = true;
  if (solveable) {
    *root1 = (-b + sqrt(diskriminante)) / (2 * a);
    *root2 = (-b - sqrt(diskriminante)) / (2 * a);
    std::cout << "the root of equation" << a << "xˆ2 + " << b << "x + " << c << " = 0" << " is: " << "\n";
  } else
    std::cout << "Keine Lösung" << "\n";

  return solveable;
}
int main() {
  double root1 = 0.;
  double root2 = 0.;
  root_finding(2, 5, 2, &root1, &root2);
  std::cout << "x_1 = " << root1 << "\tx_2 = " << root2 << "\n";
  root_finding(1, -6, 9, &root1, &root2);
  std::cout << "x_1 = " << root1 << "\tx_2 = " << root2 << "\n";
  root_finding(1, 0, 10, &root1, &root2);
  return 0;
}