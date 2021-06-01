#pragma once

#include "Item.hpp"
#include <string>
#include <vector>
#include <iostream>

using std::string;
using std::vector;

class Category {
  private:
    int const ID;
    string name;
    vector<Item> items;
  public:
    //GETTERS
    int const getID();
    string const getCatName();
    vector<Item> const getItems();

    //SETTERS
    void setName(string);

    //ADDERS
    void addItem();
};
