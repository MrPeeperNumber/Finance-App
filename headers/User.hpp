#pragma once

#include <string>
#include <vector>

using std::string;
using std::vector;

class User {
  private:
    int const ID;
    string const firstName;
    string const lastName;
    vector<string> aliases;
    vector<string> emails;
    string paypalEmail;
  public:
    int const getID();
    string const getFirst();
    string const getLast();
    string const getFull();
    string const getAlias();
    vector<string> const getAliases();
    vector<string> const getEmail();
    string const getPaypal();

    void setAliases();
    void setEmail();
    void setPaypal();

    void addAlias();
    void addEmail();
    void addPaypal();
};
