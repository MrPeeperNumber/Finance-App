#pragma once

#include "Users.hpp"
#include "Date.hpp"
#include "Category.hpp"
#include "Item.hpp"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Monthly {
  private:
    int const ID;
    vector<User> users;
    vector<Date> dates;
    vector<Category> categories;
    vector<Item> items;
    string ItemDescription;
  public:
    int const getID();
    vector<User> const getAllUsers();
    User const getUser();
    vector<Date> const getAllDates();
    Date const getDate();
    vector<Category> const getAllCats();
    Category const getCat();
    vector<Item> const getAllItems();
    Item const getItem();
    string const getItemDescrip();
};

class Calcs : private Monthly {
  private:

  public:

};
