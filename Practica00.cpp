/* autor: Sebastián Águila */
#include <iostream>
using namespace std;
int cuentaPares(int v[],int n);

int main(){
	int v[10000],n,nCasos;
	cin >> nCasos;
	for(int i = 0 ; i < nCasos ; i++){
		cin >> n;
		for(int j = 0 ; j < n; j++) cin >> v[j];
		cout << cuentaPares(v,n) << endl;
	}

}

int cuentaPares(int v[],int n){
	int resultado = 0;
	for(int i = 0; i < n ; i++) if(v[i] % 2 == 0) resultado++;
	return resultado;
}
