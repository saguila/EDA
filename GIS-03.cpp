/* autor: Sebastián Águila */
#include<iostream>
using namespace std;
int calculo(int n, int x, int y);

int main(){
	const int M = 10000007;
	int n, x, y;

	while ((cin >> n), n != -1){
		cin >> x >> y;
		cout << calculo(n, x, y) % M<< endl;
	}
	return 0;
}

int calculo(int n, int x, int y){
	if (n == 0) return x ;
	else if (n == 1) return y;
	else return calculo(n - 1, y, x + y);
}
