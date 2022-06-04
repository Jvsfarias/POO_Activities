#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//o uso de métodos inline não alteram a lógica do programa

int main() {
  Time t(11,50,59);
  t.tick();
  t.printUniversal();
  t.setTime(11,59,59);
  t.tick();
  t.printUniversal();
  t.setTime(23,59,59);
  t.tick();
  t.printUniversal();
  return 0;
}
