#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int i, j, p, w, baris, kolom, A[25][25], B[25][25], data[25][25];
	
	cout << "Jumlah Baris Matriks: "; cin >> baris;
	cout << "Jumlah Kolom Matriks: "; cin >> kolom;
	cout << "\n------------ Matriks A ------------\n";
	
	for (i=0; i<baris; i++) {
		for (j=0; j<kolom; j++) {
			cout << "Masukkan (baris, kolom) ["<<i<<", "<<j<<"]: "; cin >> A[i][j];
		}
	}
	
	cout << "\n------------ Matriks B ------------\n";
	for (i=0; i<baris; i++) {
		for (j=0; j<kolom; j++) {
			cout << "Masukkan (baris, kolom) ["<<i<<", "<<j<<"]: "; cin >> B[i][j];
		}
	}
	
	for (i=0; i<baris; i++) {
		for (j=0; j<kolom; j++) {
			data[i][j]=0;
			for (p=0; p<kolom; p++) {
				w=A[i][p]*B[p][j];
				data[i][j]=data[i][j]+w;
			}
		}
	}

	cout<<"\nHasil Matriks A x B" << endl;
	for (i=0; i<baris; i++) {
		for (j=0; j<kolom; j++) {
			cout << " " << data[i][j];
			cout << "\t";
		}
		cout << endl;
	}
	
	getch();
}
