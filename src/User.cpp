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
string User::getAlias(int input) {
  return aliases.at(input);
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
    cout << "No paypal emails found for " << getAlias(0) << endl;
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

void User::setEmail(string input) {
  emails.push_back(input);
}

void User::setPaypal(string input) {
  paypalEmail.push_back(input);
}

void User::setUsername(string input) {
  username = input;
}

void User::setPassword(string input) {
  password = input;
}
//END SETTERS

//ADDERS
void User::addAlias(string input) {
  aliases.push_back(input);
}

void User::addEmail(string input) {
  emails.push_back(input);
}

void User::addPaypal(string input) {
  paypalEmail.push_back(input);
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
      break;
    }
  }
}

void User::subEmail(string input) {
  int i = 0;
  for(auto j : input) {
    input[i] = std::tolower(input[i]);
  }

  for(auto i = 0; i < emails.size(); i++) {
    if(emails.at(i) == input) {
      emails.erase(emails.begin()+i);
      break;
    }
  }
}

void User::subPaypal(string input) {
  int i = 0;
  for(auto j : input) {
    input[i] = std::tolower(input[i]);
  }

  for(auto i = 0; i < paypalEmail.size(); i++) {
    if(paypalEmail.at(i) == input) {
      paypalEmail.erase(paypalEmail.begin()+i);
      break;
    }
  }
}
//END REMOVERS
