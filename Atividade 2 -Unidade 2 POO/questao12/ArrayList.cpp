#include <iostream>
using std::cout,std::endl;
#include <cstring>
#include "ArrayList.h"

void somaArray(ArrayList &array,int num){
    for(int i=0;i<array.tam-1;i++){
      array.arr[i] = array.arr[i]+num;
    }
  }

void subArray(ArrayList &array,int num){
    for(int i=0;i<array.tam-1;i++){
      array.arr[i] = array.arr[i]-num;
    }
  }
void mulArray(ArrayList &array,int num){
    for(int i=0;i<array.tam-1;i++){
      array.arr[i] = array.arr[i]*num;
    }
  }
void divArray(ArrayList &array,int num){
    for(int i=0;i<array.tam-1;i++){
      array.arr[i] = array.arr[i]/num;
    }
  }
ArrayList::ArrayList(int tam) : pos(0)
  {
    if (tam > 0)
    {
      this->tam = tam;
      arr = new int[tam];
    }
    else
    {
      arr = nullptr;
      this->tam = 0;
    }
  }


  ArrayList::~ArrayList()
  {
    if (arr)
      delete [] arr;
  }


  ArrayList &ArrayList::add(int v)
  {
    if (pos < tam)
      arr[pos++] = v;
    
    return *this;
  }


  void ArrayList::print() const
  {
    for (int i = 0 ; i < pos ; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

  int ArrayList::busca(int ind) const{

    if(ind <= pos){
      return arr[ind];
      }
    return 0;
  }


  void ArrayList::remove(int ind){ 
    if(ind <= pos){
      for(int i=ind; i<=tam-1;i++){
        arr[i] = arr[i+1];
      }
      pos--;
      }
  }

  void ArrayList::removeEL(int elem){ 
    for(int i=0;i<tam-1;i++){
      if(arr[i] == elem){
        for(int j=i; j<=tam-1;j++){
        arr[j] = arr[j+1];
      }
        pos--;
      }
    } 
  }


  

  