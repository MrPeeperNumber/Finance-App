#include "../headers/Date.hpp"

//GETTERS
int Date::getDayINT() { return day; }

int Date::getMonINT() { return month; }

int Date::getYearINT() { return year; }

string Date::getDaySTR() {
  if(day < 10) return "0" + to_string(day);
  else return to_string(day);
}

string Date::getMonSTR() {
  if(month < 10) return "0" + to_string(month);
  else return to_string(month);
}

string Date::getYearSTR() { return to_string(year); }
//END GETTERS

//SETTERS
void Date::setDay(int input) { day = input; }

void Date::setMonth(int input) { month = input; }

void Date::setYear(int input) { year = input; }
//END SETTERS
