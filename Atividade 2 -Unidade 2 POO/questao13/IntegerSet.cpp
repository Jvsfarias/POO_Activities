#include <iostream>
using namespace std;
#include "IntegerSet.h"
#include <cstring>


void unionOfSets(IntegerSet i1, IntegerSet i2){
  int array_3[100];
  for(int i=0;i<=99;i++){
    if(i1.arr[i] == 1|| i2.arr[i] == 1){
      array_3[i] = 1;
    } else array_3[i] = 0;
  }
  cout << "União dos conjuntos: " << endl;
  for(int i=0;i<=99;i++){if(array_3[i] == 1) cout << i << " ";}
  cout << endl;
}

void intersectionOfSets(IntegerSet i1, IntegerSet i2){
  int array_3[100];
  for(int i = 0; i<=99;i++){
    if((i1.arr[i] == 1) && (i2.arr[i] == 1)){
      array_3[i] = 1;
    } else array_3[i] = 0; 
  }

  cout << "Intersecção dos conjuntos: " << endl;
  for(int i=0;i<=99;i++){if(array_3[i] == 1) cout << i << " ";}
  cout << endl;
}



IntegerSet::IntegerSet(){};

IntegerSet::IntegerSet(int array[], int tam){
  for(int i=0;i<=99;i++){arr[i] = 0;}
  tamanho = tam;
  for(int i=0;i<tam;i++){
    int n = array[i];
    arr[n] = 1;
  } 
  }

void IntegerSet::print() const{
  for(int i=0;i<=99;i++){
    if(arr[i] == 1){
      cout << i << " ";
    }
  }
  cout << endl;
}

void IntegerSet::deleteElement(int n_del){
  arr[n_del] = 0;
  tamanho--;
}