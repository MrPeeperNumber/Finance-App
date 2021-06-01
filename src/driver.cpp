#include "../headers/driver.hpp"

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main() {
  bool run = true;
  int choice;

  vector<User> usersList;
  vector<Category> categories;

  greeting();
  while(run) {
    cout << "What would you like to do?" << endl;
  }

  return 0;
}
