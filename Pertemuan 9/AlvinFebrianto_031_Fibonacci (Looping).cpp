#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    // Deklarasi variabel
    int n, f_n1 = 0, f_n2 = 1, f_n = 0;
	
    cout << "Program Fibonacci \n\n";
    // Input nilai ke dalam program
    cout << "Masukkan nilai ke-n: "; cin >> n;	
	
    // Melakukan looping terhadap nilai yang telah diinput
    for(int i = 1; i <= n; i++) {
	// Mencetak dua deret pertama bilangan fibonacci
        if(i == 1) {
            cout << "\n" << f_n1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << f_n2 << ", ";
            continue;
        }
        // Mencetak hasil deret bilangan fibonacci
        f_n = f_n1 + f_n2;
        cout << f_n;
	f_n1 = f_n2;
        f_n2 = f_n;
        
        // Menampilkan tanda koma atau titik setelah bilangan fibonacci
        if(i < n) {
            cout << ", ";
	} else {
	    cout << ".";
	}
    }
	
    getch();
}
