// Mayor elemento de una matriz mxn

#include <iostream>
using namespace std;

int main () {
	int m, n, max;
	cin >> m >> n;
	int A[m][n];
	max = 0;
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin >> A[i][j];
			if (A[i][j]>max){
				max = A[i][j];
			}
		}
	}
	
	cout << max;	
	
	return 0; 
}
