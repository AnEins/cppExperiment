//
// Created by zengx on 2023/3/15.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
bool palindrome(const string &Palindrome) {
  const int str_size = Palindrome.size();
  bool flag = false;
  for (int i = 0; i < str_size / 2; ++i) {
    if (Palindrome[i] != Palindrome[str_size - i - 1]) {
      flag = false;
      break;
    } else
      flag = true;
  }
  return flag;
}
int main() {
  std::cout << "Bitte ein Wort eingeben" << "\n";
  std::vector<string> test_collection = {"rolor", "roor", "ro111r", "r1lr", "1rlr"};
  string Palindrome = "r1lor";
  //cin >> Palindrome;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte Ganzzahl eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> Palindrome; // Versuche Zuweisung erneut
  }
  for (const string &elem : test_collection) {
    palindrome(elem) ? std::cout << "Ja" << "\n" : std::cout
        << "Nein" << "\n";
  }
  return 0;
}