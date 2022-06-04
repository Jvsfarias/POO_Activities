#include <iostream>
#include "agenda.h"


Agenda::Agenda(int qtdPessoas){
  pessoas = new Pessoa[qtdPessoas];
  numPessoas = 0;
};
Agenda::~Agenda(){
  delete [] pessoas;
};

void Agenda::armazenaPessoa(const string &nome,const int &idade, const float &altura){Pessoa people(nome,idade,altura);
  pessoas[numPessoas++] = people;
  };

void Agenda::armazenaPessoa(const Pessoa &p){
  pessoas[numPessoas++] = p;
}

void Agenda::removePessoa(string nome){

  for(int i=0;i<=numPessoas;i++){
    if(pessoas[i].getNome() == nome){  
      pessoas[i] = pessoas[i+1];
      numPessoas--;
      }
    }
  }


int Agenda::buscaPessoa(string nome) const{
  for(int i=0;i<=numPessoas;i++){
    if(pessoas[i].getNome() == nome){
      return i;
    }
  }
  return 0;
}

void Agenda::imprimePovo() const{
  if(numPessoas == 0) cout << "Lista Vazia!" << endl;
  for(int i=0;i<numPessoas;i++){
  cout << pessoas[i].getNome() << endl;
  cout << pessoas[i].getIdade() << endl;
  cout << pessoas[i].getAltura() << endl;
  cout << endl;
    
  }
}

void Agenda::imprimePessoa(int pos) const {
  cout << pessoas[pos].getNome() << endl;
  cout << pessoas[pos].getIdade() << endl;
  cout << pessoas[pos].getAltura() << endl;
  cout << endl;

}