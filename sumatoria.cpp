// Sumatoria de los elementos de una matriz mxn

#include <iostream>
using namespace;

int main (){
	int n, m, s;
	s = 0;
	cin >> m >> n;
	int A[m][n];
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];

		}
	}
	
	return 0;
}
