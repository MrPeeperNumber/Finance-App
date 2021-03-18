#include "../headers/driver.hpp"

int main() {

  bool run = true;

  while(run) {
    Month July;
    test();

    July.getMonthName();
    July.getMonthNum();
    July.getDay();
    July.getYear();

    run = false;
  }


  return 0;
}
