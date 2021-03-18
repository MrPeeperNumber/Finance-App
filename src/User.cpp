#include "../headers/User.hpp"

//GETTERS
int const User::getID() {
  return ID;
}

string User::getFirst() {
  return firstName;
}

string User::getLast() {
  return lastName;
}

string User::getFull() {
  return firstName + " " + lastName;
}

//not sure what this will do, if anything
//existent in case it's needed
string User::getAlias() {
  return "Fake string";
}

vector<string> User::getAliases() {
  return aliases;
}

//not sure what this will do, if anything
//existent in case it's needed
string User::getEmail() {
  return "empty string";
}

vector<string> User::getEmails() {
  return emails;
}

string User::getPaypal() {
  return "fake string";
}

vector<string> User::getPaypals() {

  if(!paypalEmail.empty()) {
    return paypalEmail;
  }
  else {
    cout << "No paypal emails found for " << getAlias() << endl;
  }
}

string User::getUsername() {
  return username;
}

string User::getPassword() {
  return password;
}
//END GETTERS

//SETTERS
void User::initAliases(string input) {
  aliases.push_back(input);
}

void User::setEmail() {

}

void User::setPaypal() {

}

void User::setUsername() {

}

void User::setPassword() {

}
//END SETTERS

//ADDERS
void User::addAlias(string input) {
  aliases.push_back(input);
}

void User::addEmail() {

}

void User::addPaypal() {

}
//END ADDERS

//REMOVERS
void User::subAlias(string input) {
  int i = 0;
  for(auto j : input) {
    input[i] = std::tolower(input[i]);
  }

  for(auto i = 0; i < aliases.size(); i++) {
    if(aliases.at(i) == input) {
      aliases.erase(aliases.begin()+i);
      return;
    }
  }

}
