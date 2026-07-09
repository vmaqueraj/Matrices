// Suma de matrices

#include <iostream>
using namespace std;

int main () {
	int m, n;
	cin >> m >> n;
	int A[m][n];
	int B[m][n];
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> B[i][j];
		}
	}	
	
	
	
	
	
	return 0;
}
