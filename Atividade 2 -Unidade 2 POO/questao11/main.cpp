#include <iostream>
using namespace std;
#include "ArrayList.h"

int main() {
  ArrayList al(10);

  al.add(1).add(2).add(3).add(4).add(5).add(1).add(6);

  al.print();
  cout << al.busca(3) << endl;

  al.removeEL(2);
  al.print();

  return 0;
}