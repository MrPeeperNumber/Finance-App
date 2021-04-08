#pragma once

#include "Date.hpp"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Item {
  private:
    int const ID;
    Date dateBought;
    double cost;
    string boughtBy;
    vector<string> debtorNames;
    vector<int> debtorIDs;
    int numDebtors;
    string category;
  public:
    //GETTERS
    int const getID();
    Date getDateBought();
    double getCost();
    string getBoughtBy();
    vector<string> getDebtorNames();
    vector<int> getDebtorIDs();
    int getNumDebtors();

    //SETTERS
    void setDateBought(string);
    void setCost(double);
    void setBoughtBy();
    void setDebtorNames(string);
    void setDebtorIDs();
    void setNumDebtors();

    //ADDERS
    void addDebtorName(string);
    void addDebtorID(string);
    void addToCat();

    //REMOVERS
    void subDebtorName(string);
    void subDebtorID(int);
    void subFromCat();
};
