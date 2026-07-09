// Suma de elementos de la diagonal de una matriz cuadrada

#include <iostream>
using namespace std;

int main () {
	int n, s;
	s = 0;
	cin >> n;
	int A[n][n];
	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	
	
	
	return 0;
}
