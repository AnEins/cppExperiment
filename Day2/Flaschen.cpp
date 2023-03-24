//
// Created by zengx on 2023/3/17.
//
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;

class Flasche {
 private:
  double dVolumen = 0.0;
  std::string sMaterial = "plastic";
 public:
  Flasche() = default;
  Flasche(double dVolumen_, std::string sMaterial_) : dVolumen(dVolumen_), sMaterial(sMaterial_) {}
  double get_dVolumen() { return dVolumen; }
  void set_dVolumen(double dVolumen_) { dVolumen = dVolumen_; }
  std::string get_sMaterial() { return sMaterial; }
  void set_sMaterial(std::string sMaterial_) { sMaterial = sMaterial_; }
  void printFlasche() {
    cout << "Volumen: " << dVolumen << " Material: " << sMaterial << "\n";
  }
  void adoptFlasche(Flasche Flasche2) {
    this->sMaterial = Flasche2.sMaterial;
    this->dVolumen = Flasche2.dVolumen;
  }
};
int main() {
  Flasche flasche1;
  Flasche flasche2;
  flasche1.set_dVolumen(50);
  flasche1.set_sMaterial("plastic");
  flasche2.set_dVolumen(20);
  flasche2.set_sMaterial("metal");
  flasche1.get_dVolumen();
  flasche2.get_dVolumen();
  flasche1.get_sMaterial();
  flasche2.get_sMaterial();
  flasche1.printFlasche();
  flasche2.printFlasche();
  flasche2.adoptFlasche(flasche1);
  return 0;
}