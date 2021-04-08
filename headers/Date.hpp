#pragma once

#include <string>

using std::string;
using std::to_string;

class Date {
  private:
    int day;
    int month;
    int year;
  public:
    //GETTERS
    int getDayINT();
    int getMonINT();
    int getYearINT();

    string getDaySTR();
    string getMonSTR();
    string getYearSTR();
    //END GETTERS

    //SETTERS
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    //END SETTERS
};
