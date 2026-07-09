// Producto de un escalar por una matriz

#include <iostream>
using namespace std;

int main () {
	int k, m, n;
	cin >> k >> m >> n;
	int A[m][n];
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	
	
	
	return 0;
}
