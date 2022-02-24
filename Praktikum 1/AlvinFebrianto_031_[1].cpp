#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i, n, data[50];
	float r, j;
	
	cout << "Masukkan banyaknya data = "; cin >> n;
	cout << endl;
	
	for (i=0; i<n; i++) {
		cout << "Data [" << i+1 << "] = "; cin >> data[i];
		j += data[i];
	}
	
	r = j/n;
	
	cout << "\nBanyaknya data = " << n;
	cout << "\nRata-rata = " << r;
	cout << "\nJumlah = " << j;
	
	getch();
}
