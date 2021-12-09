#include <iostream>
using namespace std;

int main()
{
	char nama[100];
	int umur;
	cout << "Masukan nama anda :"; //meminta inputan string
	cin.getline(nama, 100);
	
	cout << "masukan umur anda"; //meminta input umur atau angka
	cin >> umur;
	cout << "Helllo World! by - "<< nama << "(" << umur << ")";
}
