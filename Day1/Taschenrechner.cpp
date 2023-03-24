//
// Created by zengxin on 2023/3/14.
//
#include <iostream>
using namespace std;

int main() {

  double num1 = 0., num2 = 0.;
  char opr = '+';
  cout << "Taschenrechner\n";
  std::cout << "Bitte zwei Zahlen eingeben" << "\n";
  cin >> num1 >> num2;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte Ganzzahl eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> num1 >> num2; // Versuche Zuweisung erneut
  }
  std::cout << "Bitte folgende Operator eingeben: + - * /" << "\n";
  cin >> opr;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte nur Operator eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> opr; // Versuche Zuweisung erneut
  }

  double result = 0.0;
  switch (opr) {
    case '+':result = num1 + num2;
      break;
    case '-':result = num1 - num2;
      break;
    case '*':result = num1 * num2;
      break;
    case '/':
      if (num2 == 0) {
        cerr << "Error: Division by zero condition!";
        return -1;
      }
      result = num1 / num2;
      break;
    default:std::cout << "Fehler" << "\n";
      break;
  }
  std::cout << num1 << opr << num2 << " = " << result << endl;
  return 0;
}