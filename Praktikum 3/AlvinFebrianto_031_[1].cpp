#include <iostream>
#include <stdio.h>
using namespace std;

int H(const char*s) {
	int x = 0;
	for (;*s!='\0';s++)
	++x;
	return x;
}

main (void) {
	char String [100];
	
	cout << "Tuliskan kata: ";
	cin.getline(String,100);
	cout << endl;
	cout << "Jumlah Karakter: " << H(String) << endl;
}
