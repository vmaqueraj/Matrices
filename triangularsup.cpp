//Matriz triangular superior con elementos validos 1

#include <iostream>
using namespace std;

int main (){
	int n;
	cin >> n;
	
	int M[n][n];

	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if (i<=j){
				M[i][j] = 1;
			} else {
				M[i][j] = 0;
			}
		}
	}
		
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}	

	return 0;
}
