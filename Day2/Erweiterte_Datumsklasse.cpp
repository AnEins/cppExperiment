#include<ctime>
#include<cstdlib>
#include<iostream>
#include <iomanip>

using namespace std;
class Date {
 private:
  int m_day, m_month, m_year;
 public:
  Date();
  friend void printDate(Date obj);
  Date(int day, int month, int year);
  int compare(Date otherDay);
  bool isEqual(Date dd);
  int getDay();
  int getMonth();
  int getYear();

};
Date::Date(int day, int month, int year) {
  m_day = day;
  m_month = month;
  m_year = year;
}
Date::Date() {
  //  srand(time(nullptr));get same Random value if srand(...)is written hier.
  // Since the seed of the srand function is based on the current time, if the program is executed multiple times in the same second, the seed value of the srand function will be the same, resulting in the same sequence of random numbers being generated.
  //!!Call the srand function only once in the program to avoid losing the randomness of the random number sequence due to multiple calls
  m_day = rand() % (31 - 1 + 1) + 1;
  m_month = rand() % (12 - 1 + 1) + 1;
  m_year = rand() % (2030 - 1970 + 1) + 1970;
}
int Date::getDay() { return m_day; }
int Date::getMonth() { return m_month; }
int Date::getYear() { return m_year; }
bool Date::isEqual(Date dd) {
  if (m_day == dd.m_day && m_month == dd.m_month && m_year == dd.m_year)
    return true;
  else
    return false;
}
int Date::compare(Date otherDay) {
  //1, if otherDay is earlier
  int flag = 0;
  if (this->m_year > otherDay.m_year)
    flag = 1;
  else if (this->m_year < otherDay.m_year)
    flag = -1;
  else {
    if (this->m_month > otherDay.m_month)
      flag = 1;
    else if (this->m_month < otherDay.m_month)
      flag = -1;
    else {
      if (this->m_day > otherDay.m_day)
        flag = 1;
      else if (this->m_day < otherDay.m_day)
        flag = -1;
      else {
        flag = 0;
      }
    }
  }
  return flag;
}
void printDate(Date obj) {
  std::cout << "DD-MM-YYYY: " << obj.m_day << "-" << obj.m_month << "-" << obj.m_year << std::endl;
}
int main() {
  srand(time(nullptr));

  Date d1 = Date();
  printDate(d1);
  //d1.m_day = 15;
  Date d2 = Date();
  printDate(d2);

  int result = d2.compare(d1);
  if (result == 1) {
    std::cout << "d1 is later than d2" << std::endl;
  } else if (result == -1) {
    std::cout << "d1 is earlier than d2" << std::endl;
  } else {
    std::cout << "d1 is the same as d2" << std::endl;
  }
}