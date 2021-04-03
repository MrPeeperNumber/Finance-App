#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using std::string;
using std::vector;
using std::cout;
using std::endl;

class User {
  private:
    int const ID;
    string firstName;
    string lastName;
    vector<string> aliases;
    vector<string> emails;
    vector<string> paypalEmail;

    string username;
    string password;
  public:
    //GETTERS
    int const getID();
    string getFirst();
    string getLast();
    string getFull();
    string getAlias(int);
    vector<string> getAliases();
    string getEmail();
    vector<string> getEmails();
    string getPaypal();
    vector<string> getPaypals();
    string getUsername();
    string getPassword();

    //SETTERS
    void initAliases(string);
    void setEmail(string);
    void setPaypal(string);
    void setUsername(string);
    void setPassword(string);

    //ADDERS
    void addAlias(string);
    void addEmail(string);
    void addPaypal(string);

    //REMOVERS
    void subAlias(string);
    void subEmail(string);
    void subPaypal(string);
};
