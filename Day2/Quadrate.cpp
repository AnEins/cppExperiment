//
// Created by zengx on 2023/3/17.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
class Square {
 private:
  const double _length = 0.0;
 public:
  Square() = default;
  Square(const double length) : _length(length) {};
  Square(const Square &other) : _length(other._length) {}
  double getLength() const { return _length; }
  double getArea() const { return _length * _length; }
  double getPerimeter() const { return 4 * _length; }
};
Square operator+(const Square &A, const Square &B) {

  return Square(A.getLength() + B.getLength());
}
Square operator-(const Square &A, const Square &B) {
  return Square(A.getLength() - B.getLength());

}
ostream &operator<<(ostream &os, Square other) {
  os << "Kantenlänge=" << other.getLength() << ", Fläche=" << other.getArea() << ", Umfang=" << other.getPerimeter();
}

int main() {
  Square square(3);
  std::cout << "length: " << square.getLength() << " " << "Area: " << square.getArea() << " " << "Perimeter: "
            << square.getPerimeter() << std::endl;
  Square square2(square);
  std::cout << "length: " << square2.getLength() << " " << "Area: " << square2.getArea() << " " << "Perimeter: "
            << square2.getPerimeter() << std::endl;
  Square square3(8);
  Square square4(6);
  Square x = square3 + square4;
  std::cout << "x " << x << "\n";
  Square y = square3 - square4;
  std::cout << "y " << y << "\n";

  return 0;
}