//
// Created by zengx on 2023/3/17.
//
//
// Created by zengx on 2023/3/17.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
class Person {
 private:
  string m_sName = "Max";
  string m_sSurname = "Mustermann";
  int m_iAge = 25;
 public:
  Person() = default;
  Person(string sName, string sSurname, int iAge) : m_sName(sName), m_sSurname(sSurname), m_iAge(iAge) {}
  ~Person() = default;
  string getName() const { return m_sName; };
  string getSurname() const { return m_sSurname; };
  int getAge() const { return m_iAge; };
  bool setAge(int iAge) {
    m_iAge = iAge;
    return true;
  };
  virtual void printInfo() {
    std::cout << "student" << getName() << " " << getSurname() << ". Age: " << getAge() << "\n";
  };
};

class Student : public Person {
 private:
  unsigned int m_uiStudentID = 0;

 public:
  Student() = default;
  Student(string sName, string sSurname, int iAge, unsigned int uiStudentID)
      : Person(sName, sSurname, iAge),
        m_uiStudentID(uiStudentID) {};
  ~Student() = default;
  unsigned int getStudentID() { return m_uiStudentID; }
  string getName() const { return "Student: " + Person::getName(); }
  void printInfo() override {
    std::cout << getName() << " " << getSurname() << ". Age: " << getAge() << ". ID:  "
              << getStudentID() << "\n";
  }

};
int main() {
  Person jack("Jack", "Rush", 38);
  Student student_jack("Jack", "Rush", 38, 87373);
  Person *ptr_person1 = new Student("Stefani", "Germanotta", 36, 911);
  Person *ptr_person2 = new Student("Ryan", "Gosling", 46, 27353);
  Person *ptr_person3 = new Student("Jason", "Adonis", 52, 26050);

  ptr_person1->printInfo();
  ptr_person2->printInfo();
  ptr_person3->printInfo();
  delete ptr_person1;
  delete ptr_person2;
  delete ptr_person3;

  return 0;
}