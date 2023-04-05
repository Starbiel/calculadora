#include <iostream>
#include "Fim.h"
#define Meu_Cu

int main() {
#ifndef MEu_Cu
	booleano();
	while (true) {
		double abaco(NumeroLegal());
		if (abaco == 0) {
			break;
		}
		char carrim(operador());
		double ocab(NumeroLegal());
		resposta(calculo(abaco, ocab, carrim));
		if (igualdade(abaco, ocab))
			cout << abaco << " eh igual a " << ocab << '?' << igualdade(abaco, ocab) << "\n";
		else
			cout << abaco << " eh diferente de " << ocab << "\n\a";
		return 0;
	}
#endif
}