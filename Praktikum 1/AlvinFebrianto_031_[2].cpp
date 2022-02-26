#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
	int kode[5] = {001, 002, 003, 004, 005};
	string nama[5] = {"Penghapus", "Pensil", "Buku", "Rautan", "Penggaris"};
	int jumlah[5] = {4, 3, 2, 3, 5};
	int harga[5] = {1000, 1500, 2000, 1000, 500};
	int total[5];
	int jb = 0;
	int jt = 0;
	
	cout << "Kode\tNama\t\tJumlah\tHarga\tTotal" << endl;
	
	for (int i=0; i<5; i++) {
		total[i] = jumlah[i]*harga[i];
		cout << setfill ('0') << setw (3) << kode[i] << "\t" << nama[i] << "    \t" << jumlah[i] << " \t" << harga[i] << "\t" << total[i] << endl;
		jb = jb + jumlah[i];
		jt = jt + jumlah[i];
	}
	
	cout << "\nJumlah item = 17";
	cout << "\nTotal Pembelian = 18.000";
	
	getch();
}
