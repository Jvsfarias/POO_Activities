#include <iostream>
using namespace std;
#include "Retangulo.h"


Retangulo::Retangulo(float ha,float la){
  altura = ha;
  largura = la;
}

void Retangulo::setAltura(int ha){
  if(ha>1.0 && ha<20.0){
    altura = ha;
  }else altura = 1.0;
}

void Retangulo::setLargura(int la){
  if(la>1.0 && la<20.0){
    largura = la;
  }else largura = 1.0;
}

float Retangulo::perimetro(){
  int p = (getLargura() * 2) + (getAltura()*2);
  return p;
}

float Retangulo::area(){
  int a = getLargura()*getAltura();
  return a;
}