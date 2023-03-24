//
// Created by zengx on 2023/3/15.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main() {
  int num = 0;
  std::cout << "Bitte Ganzzahlen eingeben" << std::endl;
  cin >> num;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte nur Ganzzahlen eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> num; // Versuche Zuweisung erneut
  }
  int result = 0;
  std::cout << "Zahl in Zehnersystem: " << num << "\n";
  while (num != 0) {

    result = num % 20;
    std::cout << result << "\n";
    num = num / 20;
  }
  return 0;
}