// Producto de un escalar por una matriz

#include <iostream>
using namespace std;

int main () {
	int k, m, n;
	cin >> k >> m >> n;
	int A[m][n];
	int P[m][n];
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			P[i][j] = k * A[i][j];
		}
	}	
	
	cout << endl;
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout << P[i][j] << " ";
		}
		cout << endl;
	}		
	
	
	return 0;
}
