/* autor: Sebastián Águila */
#include<iostream>
using namespace std;

void resuelve(int v[],int n);
int encuentraZero(int v[],int ini,int fin);
	bool encuentraCero(int v[],int &ini,int fin);

int main(){
	int v[10000],nCasos,n;
	cin >> nCasos;
	for(int i = 0 ; i < nCasos;i++){
		cin >> n;
		for(int j = 0 ;j < n;j++) cin >> v[j];
	resuelve(v,n);	
	}
	return 0;
	}
	
void resuelve(int v[],int n){
	int ini = 0,x = 0,y = 0,mayor = 0,lastIni = 0;

	while(encuentraCero(v,ini,9)){
	if((ini - lastIni) > mayor){
	x = lastIni;
	y = ini;
	mayor = ini - lastIni;
	}
	lastIni = ini;
	}
	
	if(mayor > 0) cout << mayor << " -> [" << x << "," << y << "]" << endl;
	else cout << "SIGUE BUSCANDO" << endl;
}

	int encuentraZero(int v[],int ini,int fin){
		for(int i = ini;i < fin;i++) if(v[i] == 0) return i + 1; // comprende los elementos entre ini a i - 1
		return 0; // en ese intervalo no hay ningun 0 por lo tanto fin - ini
		}
	
	bool encuentraCero(int v[],int &ini,int fin){
		for(int i = ini;i < fin;i++){
			if(v[i] == 0){
				ini = i;
				return true;
		}
			ini = i;
		}
		return false;
	}
