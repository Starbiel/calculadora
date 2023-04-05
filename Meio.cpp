#include <iostream>
#include "Fim.h"
#pragma once
double bw;

bool igualdade(int q, int w) {
	cout << boolalpha;
	return (q == w);
}

void booleano() {
	bool pronto {};
	cout << "escolha um tipo booleano para pronto:";
	cin >> boolalpha;
	cout << boolalpha;
	cin >> pronto;
	cout << "o valor booleano de pronto eh:" << pronto << "\n";
	cout << noboolalpha;
	cout << "ou seja, pronto eh:" << pronto << "\n";
}

char operador() {
	cout << "me de um operador(+,-,*,/):";
	char p;
	cin >> p;
	return p;
}

double NumeroLegal() {
	double inteiro1{ };
	Perguntar();
	cin >> inteiro1;
	return inteiro1;
}

void Perguntar() {
	cout << "Me de um numero:";
}

void resposta(double ow) {
	cout << "O resultado e:" << ow << "\n";
}

double calculo(double z, double a, char y) {
	switch (y) {
	case '+':
		bw = z + a;
		return bw;
	case '-':
		bw = z - a;
		return bw;
	case '*':
		bw = z * a;
		return bw;
	case '/':
		bw = z / a;
		return bw;
	}
}