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
    int const getID();
    Date const getDateBought();
    double const getCost();
    string const getBoughtBy();
    vector<string> const getDebtorNames();
    vector<string> const getDebtorIDs();
    int const getNumDebtors();

    void setDateBought();
    void setCost();
    void setBoughtBy();
    void setDebtorNames();
    void setDebtorIDs();
    void setNumDebtors();
};
