//
// Created by zengx on 2023/3/15.
//

#include <iostream>
#include <array>
#include <vector>
using namespace std;
const int max_iter = 10;
//Die Anzahl an Iterationen beträgt 10.
const double error = 1e-5;
int counter = 0;
double result = 1.0;
double heron_ite(int num, double x_n) {
/**
 * @brief
 * @a: die Zahl, deren Quadratwurzel gesucht wird
 */

  if (counter < max_iter) {
//  if (counter < max_iter && std::abs(result * result - num) > error) {
    ++counter;
    result = (num / x_n + x_n) / 2.0;
    return heron_ite(num, result);
  } else
    return result;
}
int main() {
  double num = 137;
  double x_0 = 1.0;
  std::cout << "Bitte eine Zahl, deren Quadratwurzel gesucht wird, eingeben" << "\n";
  cin >> num;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte Zahl eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> num; // Versuche Zuweisung erneut
  }
  std::cout << "Die Quadratwurzel von " << num << " is: " << heron_ite(num, x_0) << "\n";

  return 0;
}