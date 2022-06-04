#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(string nome,int idade, double altura){
  this->nome = nome;
  this->idade = idade;
  this->altura = altura;
 
}

void Pessoa::setNome(const string &nome){
  this->nome = nome;
  
}
void Pessoa::setIdade(const int &idade){
  this->idade = idade;
}
void Pessoa::setAltura(const double &altura){
  this->altura = altura;
}
void Pessoa::printDados() const{
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Altura: " << altura << endl;
}