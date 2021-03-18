#include "../headers/Month.hpp"

Month::Month() : monthName("July"), MM(07), DD(28), YYYY(1999) {};

string Month::getMonthName() {
  cout << monthName << endl;
  return monthName;
}

int Month::getMonthNum() {
  cout << MM << endl;
  return MM;
}

int Month::getDay() {
  cout << DD << endl;
  return DD;
}

int Month::getYear() {
  cout << YYYY << endl;
  return YYYY;
}
