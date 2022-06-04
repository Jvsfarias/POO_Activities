 #ifndef AGENDA_H
#define AGENDA_H
#include <string>
using namespace std;
#include "Pessoa.h"

class Agenda{
public:
   Agenda(int);
   ~Agenda();
   void armazenaPessoa(const string &nome, const int &idade, const float &altura);
   void armazenaPessoa(const Pessoa &p);

   void removePessoa(string nome);

   int buscaPessoa(string nome) const;
   void imprimePovo() const;
   void imprimePessoa(int i) const;

private:
   Pessoa *pessoas;
   int numPessoas;
};

#endif