#include <iostream>
#include "pessoa.h"


Pessoa::Pessoa(string name, string ncpf){
  nome = name;
  cpf = ncpf;
  verificarCPF();
};

void Pessoa::verificarCPF(){
  int soma1 = 0, soma2=0;
  int seq1 = 10, seq2=11;
  
  for(int i=0;i<=8;i++){
    soma1 +=  (cpf[i] - '0') * seq1;
    seq1--;
  }
  int digito1 = (soma1*10)%11;
  if(digito1 == 10){digito1 = 0;}
  
  for(int i=0;i<=8;i++){
    soma2 +=  (cpf[i] - '0') * seq2;
    seq2--;
  }
  int digito2 = ((soma2 + (digito1*2))*10)%11;
  if(digito2 == 10){digito2 = 0;}

  
    bool verf = true;  
    for (int i = 1; i < cpf.length(); i++){
      if (cpf[i] != cpf[0]) {
        verf = false;  
        break;
      }  
    }
  if((digito1==(cpf[9]-'0')) && (digito2==(cpf[10]-'0')) && verf == false){
    cpf_valido =  true;
  } else{
    cpf_valido = false;
  }
  
};

void Pessoa::apresentar(){
  string situacao;
  if(cpf_valido) situacao = "Valido";
  else situacao = "Invalido";
  cout << "Nome: " << getNome() << endl;
  cout << "CPF: " << getCPF() << " Situação:(" << situacao << ")"<< endl;
};