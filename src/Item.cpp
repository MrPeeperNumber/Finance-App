#include "../headers/Item.hpp"

//GETTERS
int const Item::getID() {
  return ID;
}

Date Item::getDateBought() {
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
  string temp = "";
  int inc = 0;

  for(auto i = 0; i < input.length(); i++) {
    if(input[i] != '/' && input[i] != '.') {
      temp += input[i];
    }
    else {
      switch (inc) {
        case 0:
          dateBought.setDay(std::stoi(temp));
          break;
        case 1:
          dateBought.setMonth(std::stoi(temp));
          break;
        case 2:
          dateBought.setYear(std::stoi(temp));
          break;
      };
      temp = "";
      inc++;
    }
  }

}

void Item::setCost(double input) {
  cost = input;
}

void Item::setDebtorNames(string input) {

  string temp = "";

  for(auto i = 0; i < input.length(); i++) {

    if(input.at(i) != ',') temp += input.at(i);
    else {
      debtorNames.push_back(temp);
      temp = "";
      i++;
    }
  }
  debtorNames.push_back(temp);

}

void Item::setDebtorIDs() {

  for(auto i = 0; i < usersList.size(); i++) {
    for(auto items : debtorNames) {
      if(items == usersList[i].getFirst()) { debtorIDs.push_back(usersList[i].getID()); }
      else if(items == userList[i].getLast()) { debtorIDs.push_back(usersList[i].getID()); }
      else {
        for(auto j = 0; j < usersList[i].size(); i++) {
          if(items == userList[i].getAliases(j)) { debtorIDs.push_back(usersList[i].getID()); }
        }
      }
    }
  }

}

void Item::setNumDebtors() {
  numDebtors = debtorNames.size();
}
//END SETTERS

//ADDERS
void Item::addDebtorName(string input) {
  debtorNames.push_back(input);
  addDebtorID(input);
}

void Item::addDebtorID(string input) {

  for(auto i = 0; i < usersList.size(); i++) {
    if(input == usersList[i].getFirst()) { debtorIDs.push_back(usersList[i].getID()); }
    else if(input == userList[i].getLast()) { debtorIDs.push_back(usersList[i].getID()); }
    else {
      for(auto j = 0; j < usersList[i].size(); i++) {
        if(input == userList[i].getAliases(j)) { debtorIDs.push_back(usersList[i].getID()); }
      }
    }
  }

}

void Item::addToCat() {

  for(auto i = 0; i < categories.size(); i++) {
    if(category == categories[i].getName()) { categories[i].addItem(getID()); }
  }

}
//END ADDERS

//REMOVERS
void Item::subDebtorName(string input) {

  auto i = 0;

  for(i = 0; i < debtorNames.size(); i++) {
    if(debtorNames.at(i) == input) {
      debtorNames.erase(debtorNames.begin()+i);
      break;
    }
  }

  subDebtorID(i);

}

void Item::subDebtorID(int i) {

  debtorIDs.erase(debtorIDs.begin()+i);

}

void Item::subFromCat() {

  for(auto i = 0; i < categories.size(); i++) {
    if(category == categories[i].getName()) { categories[i].subItem(getID()); }
  }

}
//END REMOVERS


//NOTES
/*
 * L:107-108
 * variable "categories" refers to an undeclared vector of partially written category objects
 */
