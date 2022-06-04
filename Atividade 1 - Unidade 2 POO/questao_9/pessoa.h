#ifndef PESSOA_H
#define PESSOA_H
using namespace std;
#include <string>


class Pessoa{

public:

Pessoa(string,string);

inline string getNome(){return string(nome);}
inline string getCPF(){return string(cpf);}
void setNome(char nome);
void setCPF(char cpf);

void apresentar();


private:
  void verificarCPF();

  string nome;
  string cpf;
  bool cpf_valido;
  
};


#endif