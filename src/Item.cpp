#include "../headers/Item.hpp"

//GETTERS
int const Item::getID() {
  return ID;
}

Date const Item::getDateBought() {
  return dateBought;
}

double Item::getCost() {
  return cost;
}

string Item::getBoughtBy() {
  return boughtBy;
}

vector<string> Item::getDebtorNames() {
  return debtorNames;
}

vector<int> Item::getDebtorIDs() {
  return debtorIDs;
}

int Item::getNumDebtors() {
  return numDebtors;
}
//END GETTERS

//SETTERS
void Item::setDateBought(string input) {
  int month, day, year;

  //do something that converts string of numbers into a date

  dateBought.setMonth(month);
  dateBought.setDay(day);
  dateBought.setYear(year);
  dateBought.asString(input);
}

void Item::setCost(double input) {
  cost = input;
}

void Item::setDebtorNames(string input) {

  int i = 0;
  int j = 0;
  string temp = "";
  string temp2 = "";

  for(i = 0; i < input.length(); i++) {
    if(input.at(i) != ",") { temp+=input.at(i); }
    else {
      if(temp[0] == " ") {
        for(auto k = 1; k < temp.length(); k++) {
          temp2+=temp[k];
        }
        debtorNames.push_back(temp2);
        temp = "";
        temp2 = "";
      }
    }
  }

}
//END SETTERS
