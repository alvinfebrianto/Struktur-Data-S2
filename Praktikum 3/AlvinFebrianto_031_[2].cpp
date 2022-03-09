#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main() {
	char kata[100];
	
	cout << "Tuliskan Kata (lowercase)   : ";
	cin.getline(kata,100);
	cout << "Hasil Perubahan (UPPERCASE) : " << strupr (kata) << endl;
	
	getch();
}
