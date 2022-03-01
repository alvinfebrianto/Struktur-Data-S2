#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main() {
    int i, n, data[50];
    float rata,jumlah;
    
    cout << "Banyaknya Data: "; cin >> n; cout << endl;
    
    for (i=0; i<n; i++) {
           cout << "Data" << "[" << i+1 << "]" << ": ";
           cin >> data[i];
           jumlah += data[i];
        }
        
    rata=jumlah/n;
        
    cout << "\nTotal Data = " << n;
    cout << "\nRata-rata = " << rata;
    cout << "\nJumlah = " << jumlah;
    
    double sigma = sigma+sqrt(data[i]-rata);
    double sd = sqrt(sigma/n);
    cout << "\nSigma = " << sd;
    
  	getch();
}
