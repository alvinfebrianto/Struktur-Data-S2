#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int A[2][2]={4, 8, 2, 10};
	int transpose[2][2];
	
	cout << "Matriks A" << endl;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			transpose[j][i] = A[i][j];
		}
	}
	
	cout << "\nHasil transpose matriks A" << endl;
	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			cout << transpose[i][j]<<" ";
		}
		cout << endl;
	}
	
	getch();
}
