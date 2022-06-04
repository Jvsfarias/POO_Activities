#include <iostream>
#include "agenda.h"

int main() {
  char linha[] = "---------------------------------------------\n";
	Agenda A(4);

	A.armazenaPessoa("Abel", 22, 1.78);
	A.armazenaPessoa(Pessoa("Tiago", 20, 1.80));
  A.armazenaPessoa(Pessoa("Professor", 20, 1.80));
  A.armazenaPessoa(Pessoa("felipe", 20, 1.80));
	A.imprimePovo();
	cout << linha;

	int posicao = A.buscaPessoa("Tiago");
	if (posicao > 0)
    	A.imprimePessoa(posicao);
	cout << linha;

	A.removePessoa("Professor");
	A.imprimePovo();
	cout << linha;
	
 	return 0;

}