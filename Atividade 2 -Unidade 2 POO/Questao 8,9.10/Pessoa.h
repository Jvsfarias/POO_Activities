#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using namespace std;

class Pessoa{
public:
Pessoa(string="",int=0,double=0);
void setNome(const string &);
void setIdade(const int &);
void setAltura(const double &);

string getNome() const {return nome;}
int getIdade() const {return idade;}
double getAltura() const {return altura;}

void printDados() const;

private:
string nome;
int idade;
double altura;
};

#endif