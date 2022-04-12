#include <iostream>
#include <conio.h>
using namespace std;

// Membuat fungsi fibonacci    
int Fibonacci(int n) {
	  // Jika variable n bernilai 0 atau 1 maka akan mengembalikan nilai n
    if (n == 0 || n == 1) {
        return n;
      // Jika variable n bernilai selain 0 dan 1 maka akan melakukan operasi rekursif
    } else {
    	  return(Fibonacci(n-1) + Fibonacci(n-2));
      }
    }
    
int main() {
    // Deklarasi variabel  
    int n = 0, batas;
    cout << "Program Fibonacci \n\n";
    // Input nilai ke dalam program
  	cout << "Masukkan jumlah bilangan fibonacci: "; cin >> batas;
  	cout << "\n";
  	// Melakukan looping terhadap nilai yang telah diinput
    for (int i = 1; i <= batas; i++) {
		cout << Fibonacci(n);
        n++;
        // Menampilkan tanda koma atau titik setelah bilangan fibonacci
        if(i < batas) {
          	cout << ", ";
		    } else {
			      cout << ".";
	    	}
    }
   
	getch();
}
