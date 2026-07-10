// Producto de matrices

#include <iostream>
using namespace std;

int main () {
	int m, n, p;
	cin >> m >> n >> p;
	
	int A[m][n];
	int B[n][p];
	int C[m][p];
	
	// Leer matriz A
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}	
	
	// Leer matriz B
	for (int i=0; i<n; i++){
		for (int j=0; j<p; j++){
			cin >> B[i][j];
		}
	}
	
	
	return 0;
}
