//
// Created by zengx on 2023/3/17.
//
#include <iostream>
#include <array>
#include <vector>
using namespace std;
class Person {
 private:
  string m_sName;
  string m_sSurname;
  int m_iAge;
 public:
  Person() = default;
  Person(string sName, string sSurname, int iAge) : m_sName(sName), m_sSurname(sSurname), m_iAge(m_iAge) {}
  ~Person() = default;
  string getName() const { return m_sName; };
  string getSurname() const { return m_sSurname; };
  int getAge() const { return m_iAge; };
  bool setAge(int iAge) {
    m_iAge = iAge;
    return true;
  };
};
class Student : public Person {
 private:
  unsigned int m_uiStudentID;
 public:
  Student() = default;
  Student(string sName, string sSurname, int iAge, unsigned int uiStudentID)
      : Person(sName, sSurname, iAge),
        m_uiStudentID(uiStudentID) {};
  ~Student() = default;
  unsigned int getStudentID() { return m_uiStudentID; }
  string getName() const { return "Student " + Person::getName(); }
};
int main() {
  Person jack("Jack", "Rush", 38);
  Student student_jack("Jack", "Rush", 38, 87373);
  std::cout << "jack: " << jack.getName() << "\n";
  std::cout << "studnet jack: " << student_jack.getName() << "\n";;
  return 0;
}