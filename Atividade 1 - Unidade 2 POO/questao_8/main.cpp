#include <iostream>
using namespace std;
#include "Retangulo.h"



int main() {
  Retangulo r;

  cout << r.getAltura() << endl;
  cout << r.getLargura() << endl;

  r.setAltura(21);
  r.setLargura(18);

  cout << r.perimetro() << endl;
  cout << r.area() << endl;
  return 0;
}
