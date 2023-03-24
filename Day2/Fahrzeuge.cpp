//
// Created by zengx on 2023/3/17.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
class vehicle {
 public:
  enum Color { blue, red, green, white, black };
  vehicle(Color color, int price, int construction_year)
      : _color(color), _price(price), _construction_year(construction_year), _id(_counter++) {}
  static bool isOldtimer(vehicle car) {
    car._construction_year < 1980 ? std::cout << "It is old" << "\n" : std::cout << "It is new" << "\n";
    return car._construction_year < 1980;
  }
  vehicle() = default;
  int getPrice() { return _price; }
  int getYear() { return _construction_year; }
  int getId() { return _id; }
  std::string getColor();
 private:
  int _price;
  int _construction_year;
  int _id;
  Color _color;
  static int _counter;
};
int vehicle::_counter = 1;
string vehicle::getColor() {
  string colorName[] = {"blue", "red", "green", "white", "black"};
  return colorName[_color];
}
void printInfo(vehicle car) {
  cout << "Vehicle ID: " << car.getId() << "\n";
  cout << "Vehicle Color: " << car.getColor() << "\n";
  cout << "Vehicle Price: " << car.getPrice() << "\n";
  cout << "Vehicle Year: " << car.getYear() << "\n";
}
int main() {
  //Color c = 1;
  vehicle car1(vehicle::Color::red, 150000, 1996);
  vehicle car2(vehicle::Color::black, 260000, 1977);
  printInfo(car1);
  printInfo(car2);

  vehicle::isOldtimer(car1);
  vehicle::isOldtimer(car2);

  return 0;
}