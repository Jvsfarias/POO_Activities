#include <iostream>
#include "IntegerSet.h"

int main() {
  int array[] = {1, 2 , 27 , 23, 58};
  int array2[] = {1, 2, 4, 5, 6, 58, 32};
  IntegerSet n(array,5);
  IntegerSet n1(array2,7);
  n.print();
  n1.print();
  // n.deleteElement(1);
  
  unionOfSets(n, n1);
  intersectionOfSets(n,n1);
}