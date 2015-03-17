#include <iostream>
using namespace std;

#include "Stack.h"

void escribeDigitos(int numero) {
	Stack <int> pila;
	int calculo = 0;
	do{ // Llenamos la pila
		pila.push(numero % 10);
		numero = numero / 10;
	}while(numero > 0);

	while(pila.size() > 0){
		cout << pila.top();
		if(pila.size() > 1) cout << " + ";
		calculo =calculo + pila.top();
		pila.pop();
	}
	cout << " = " << calculo << endl;
}

bool digitos() {
	int n;
	cin >> n;
	if (n == -1)
		return false;
	escribeDigitos(n);
	return true;
}

int main() {
	while (digitos()){};
	return 0;
}
