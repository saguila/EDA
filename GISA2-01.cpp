#include <iostream>
using namespace std;

#include "Stack.h"

void escribeDigitos(int numero) {
	Stack <int> pila;
	int calculo = 0;
	while(numero > 0){ // Llenamos la pila
		pila.push(numero % 10);
		numero / 10;
	}

	while(pila.size() > 0){
		cout << pila.top() << " + ";
		calculo =+ pila.top();
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
