//
// Created by zengx on 2023/3/23.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
class KeyboardControl {
 private:

 public:
  KeyboardControl();
  double Communicate();
  double Step();
  array<double, 2> speed = {0, 0};
  //an der Stelle ‘0‘ die v des rechten und
  //an der Stelle ‘1‘ die v des linken Motors.
};
int main() {
  ;
  return 0;
}