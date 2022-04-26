// Implementasi Bubble Sort pada Program C++
#include <iostream>
#include <conio.h>
using namespace std;

// Fungsi untuk mengimplementasikan bubble sort
void Bubble_Sort(int array[], int n) {
	// Deklarasi variabel i dan j untuk perulangan serta variabel temporary untuk penukaran sementara
	int i, j, temporary;
	// Looping untuk mengakses setiap elemen array
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			// Membandingkan 2 elemen array yang berdekatan
			if (array[j] > array[j + 1]) {
				// Menukar elemen jika belum sesuai urutan
				temporary = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporary;
			}
		}
	}
}

// Fungsi utama program
int main() {
	// Deklarasi variabel
	int array[100], n, i;
	
	// Input nilai untuk variabel n
	cout << "Masukkan jumlah angka dalam array: ";
	cin >> n;
	cout << endl;
	
	// Input nilai untuk variabel array
	cout << "Masukkan " << n << " elemen array: \n";
	for (i = 0; i < n; i++) {
    	    cin >> array[i];
	}
	
	// Memanggil fungsi Bubble_Sort dengan memasukkan variabel array dan n
	Bubble_Sort(array, n);
	// Menampilkan hasil pengurutan
	cout << "\nHasil array yang sudah disorting adalah: \n";
	for (i = 0; i < n; i++) {
    	    cout << "[" << array[i] << "] ";
	}
	
	getch();
}
