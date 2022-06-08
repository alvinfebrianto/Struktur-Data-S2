#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    char kota_1[10], kota_2[10], kota_3[10], kota_4[10], kota_5[10];
    int jumlah, panjang, hasil_1, hasil_2, hasil_3, hasil_4, hasil_5, hasil_6, hasil_7;
    
    // Input jumlah kota
    cout << "Jumlah kota dalam Kerajaan Britan: " << endl;
    cin >> jumlah; cout << endl;
    
    // Input nama kota
    cout << "- Kota Pertama : "; cin >> kota_1;
    cout << "- Kota Kedua   : "; cin >> kota_2;
    cout << "- Kota Ketiga  : "; cin >> kota_3;
    cout << "- Kota Keempat : "; cin >> kota_4;
	cout << "- Kota Kelima  : "; cin >> kota_5;
	cout << endl;
	
	// Menampilkan graph yang terjadi
	cout << "Sisi-sisinya adalah: " << endl;
    cout << "(" << kota_1 << ", " << kota_2 << "), ";
    cout << "(" << kota_1 << ", " << kota_4 << "), ";
    cout << "(" << kota_1 << ", " << kota_5 << "), ";
    cout << "(" << kota_2 << ", " << kota_3 << "), ";
    cout << "(" << kota_3 << ", " << kota_5 << "), ";
    cout << "(" << kota_3 << ", " << kota_4 << "), ";
    cout << "(" << kota_4 << ", " << kota_5 << ")\n\n";
	
	// Menampilkan panjang jalan yang menghubungkan vertex
	cout << "Panjang jalan antarkota:"<<endl;
	cout << "- Panjang " << kota_1 << " ke " << kota_2 << " : "; cin >> hasil_1;
	cout << "- Panjang " << kota_1 << " ke " << kota_4 << " : "; cin >> hasil_2;
	cout << "- Panjang " << kota_1 << " ke " << kota_5 << " : "; cin >> hasil_3;
	cout << "- Panjang " << kota_2 << " ke " << kota_3 << " : "; cin >> hasil_4;
	cout << "- Panjang " << kota_3 << " ke " << kota_5 << " : "; cin >> hasil_5;
	cout << "- Panjang " << kota_3 << " ke " << kota_4 << " : "; cin >> hasil_6;
	cout << "- Panjang " << kota_4 << " ke " << kota_5 << " : "; cin >> hasil_7;
	cout << endl;
	
	// Menampilkan jalan yang menghubungkan kedua simpul (x,y,z)
	cout << "Seluruh jalan yang ada dalam Kerajaan Britan dan panjang jalannya: " << endl;
	cout << "(" << kota_1 << ", " << kota_2 << ", " << hasil_1 << ") ";
	cout << "(" << kota_1 << ", " << kota_4 << ", " << hasil_2 << ") ";
	cout << "(" << kota_1 << ", " << kota_5 << ", " << hasil_3 << ") ";
	cout << "(" << kota_2 << ", " << kota_3 << ", " << hasil_4 << ") ";
	cout << "(" << kota_3 << ", " << kota_5 << ", " << hasil_5 << ") ";
	cout << "(" << kota_3 << ", " << kota_4 << ", " << hasil_6 << ") ";
	cout << "(" << kota_4 << ", " << kota_5 << ", " << hasil_7 << ") ";
	cout << "\n\n";
	
	// Menampilkan tempat pedagang berada
	cout << "Kota tempat pedagang sekarang berada: \n";
	cout << kota_1 << "\n\n";
	
	// Menampilkan kota yang diserang naga
	cout << "Kota yang diserang naga: \n";
	cout << kota_3 << "\n\n";
	
	// Menampilkan kota yang memiliki kastil
	cout << "Kota yang memiliki kastil: \n";
	cout << kota_5 << "\n\n";
	
	// Menampilkan vertex tercepat untuk sampai ke tujuan	
	cout << "Jalur yang paling cepat ditempuh tanpa melewati kota yang diserang naga: \n";
	cout << kota_1 << "-" << kota_4 << "-" << kota_5 << "\n\n";
	
	// Total edge yang harus ditempuh
	cout <<  "Dengan jarak: \n";
	cout << hasil_2 + hasil_7 << "\n\n";
	
	getch();
}
