#include <iostream>

class A {
 public:
  virtual void g() {
    std::cout << "A.g\n";
    f();
  }
  virtual void f() {
    std::cout << "A.f\n";
    h();
  }
  void h() {
    std::cout << "A.h\n";
    i();
  }
  virtual void i() { std::cout << "A.i\n"; }
};

class B : public A {
 public:
  void g() {
    std::cout << "B.g\n";
    f();
  }
  void f() {
    std::cout << "B.f\n";
    A::f();
    h();
  }
};

class C : public B {
 public:
  void g() {
    std::cout << "C.g\n";
    f();
  }
  void h() {
    std::cout << "C.h\n";
    i();
  }
  void i() { std::cout << "C.i\n"; }
};

// main.cpp
int main() {
  A a = A();
  a.f();
  std::cout << "" << "\n";
  B b = B();
  b.g();
  std::cout << "" << "\n";

  C c = C();
  c.g();
  std::cout << "" << "\n";

//  B b0 = A();
//  b0.g();  std::cout<<""<<"\n";

  A a1 = B();
  a1.f();
  std::cout << "" << "\n";

  A a2 = b;
  a2.f();
  std::cout << "" << "\n";

  A *a3 = &b;
  a3->f();
  return 0;
}