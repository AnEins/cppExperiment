//
// Created by ZENGXIN JIAO on 16.03.23.
//
#include <iostream>
#include<vector>
#include <string>
using namespace std;
string ChangeLettersOrder(const string &letter) {
  //Beispiel->Biepseil
  //wort->wrot
  //abc->abc
  //ab->ab
  //a->a
  //abcde->acbde
  const auto size = letter.size();
  string temp(size, ' ');
  //string temp=letter;
  if (size > 3) {
    temp[0] = letter[0];
    temp[size - 1] = letter[size - 1];
    for (int i = 1; i < size - 2; i += 2) {
      temp[i] = letter[i + 1];
      temp[i + 1] = letter[i];
    }
    if ((size - 2) % 2 != 0) {
      //If the string removes the head and tail is an odd number, the one before last one does not need to be swaped
      temp[size - 2] = letter[size - 2];
    }
  } else {
    //No operation required if length is less than 3
    temp = letter;
  }
  return temp;
}
string RemoveAllVowels(const string &letter) {
  string result = letter;
  vector<string> vowels = {"a", "e", "i", "o", "u"};
  int n = 0;
  for (auto itr = vowels.begin(); itr != vowels.end(); itr++) {
    n = result.find(*itr);
    if (n != -1) {
      //
      result.replace(n, 1, "");
      itr = vowels.begin() - 1;
    } else {
      //No vowels found within the word
      //itr++;
      //continue;
    }
  }
  return result;
}
int main() {
  string letter;
  std::cout << "Bitte Wort eingeben" << "\n";
  std::vector<string> test_collection_change_order = {"wort", "Beispiel", "abc", "ab", "abcdefg"};
  std::vector<string> test_collection_vokale = {"abc", "bcdf", "0", "xyz", "aeae1aa"};
  //cin >> letter;
  while (std::cin.fail()) {
    std::cout << "Falscheingabe: Bitte nur Wort eingeben" << std::endl;
    std::cin.clear(); // Setze Failbit zurück
    std::cin.ignore(1000, '\n'); // Verwerfe bisherige Eingabe bis zu einem Zeilenumbruch
    std::cin >> letter; // Versuche Zuweisung erneut
  }
  for (const auto &elem : test_collection_change_order) {
    std::cout << "before swap: " << elem << "\n";
    std::cout << "after swap: " << ChangeLettersOrder(elem) << "\n";
  }
  for (const auto &elem : test_collection_vokale) {
    std::cout << "before remove: " << elem << "\n";
    std::cout << "after remove: " << RemoveAllVowels(elem) << "\n";
  }

  return 0;
}