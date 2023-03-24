class Date {
 private:
  int m_day, m_month, m_year;

 public:

  Date(int day, int month, int year);

  bool isEqual(Date dd);

  int getDay();

  int getMonth();

  int getYear();

};


// Date.cpp


Date::Date(int day, int month, int year) {
  m_day = day;
  m_month = month;
  m_year = year;
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

// main.cpp
// Was bewirken die einzelnen Zeilen? Finden Sie Fehler!
int main() {
  Date d1 = Date(2, 2, 2011);

  //d1.m_day = 15;

  Date d2 = Date(15, 2, 2011);

  bool tf = d2.isEqual(d1);
}