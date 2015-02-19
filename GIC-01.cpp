#include <iostream>
using namespace std;

int encuentraImpar(int v[],int n);
bool pares(int v[],int ini,int fin);
bool impares(int v[],int ini,int fin);

int main(){
	int v[100000],mitad,n,nCasos;
	cin >> nCasos;
	for(int i = 0 ;i < nCasos;i++){
		cin >> n;
		for(int j = 0 ;j < n ; j++) cin >> v[j];
		if((mitad = encuentraImpar(v,n)) == -1) cout << "NO" << endl;
		else{
			if(pares(v,0,mitad) && impares(v,mitad,n)) cout << "SI " << mitad << endl;
			else cout << "NO" << endl;
		}
	}
	return 0;
}

int encuentraImpar(int v[],int n){
	int iterador = 0;
	while(iterador < n){
		if(v[iterador] % 2 == 1) return iterador;
		iterador ++;
	}
		return iterador;
	}

bool impares(int v[],int ini,int fin){
	for(int i = ini ; i < fin ; i++) if(v[i] % 2 == 0) return false;
	return true;
}

bool pares(int v[],int ini,int fin){
for(int i = ini ; i < fin ; i++) if(v[i] % 2 == 1) return false;
return true;
}
