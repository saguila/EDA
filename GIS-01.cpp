/* autor: Sebastián Águila */
#include<iostream>
using namespace std;
int calculaSerie(int base,int exponente);
bool calculo();

int main(){
	while(calculo());
	return 0;
}

bool calculo(){
	int base,exponente;
		cin >> base >> exponente;
		if(!cin)return false;
		cout << calculaSerie(base,exponente) << endl;
		return true;
}

int calculaSerie(int base,int exponente){
	int resultado = 1,acumulador = base;
	for(int i = 0 ; i < exponente; i++){
	resultado = (resultado  + acumulador) % 1000007;
	acumulador = base * acumulador % 1000007;
	}
	return resultado;
}
