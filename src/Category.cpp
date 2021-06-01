#include "../headers/Category.hpp"

//GETTERS
int const Category::getID() {
  return ID;
}

string const Category::getCatName() {
  return name;
}

vector<Item> const Category::getItems() {
  return items;
}
//END GETTERS


//SETTERS
void Category::setName(string input) {
  name = input;
}
//END SETTERS

//ADDERS
void Category::addItem() {

}
//END ADDERS
