#include <iostream>
#include <cstring>
using namespace std;

struct paket_internet
{
	string nama_paket;
	int kuota_telpon;
	int kuota_internet;
}begadang;

int main() 
{ 
	begadang.nama_paket = "Begadang";
	begadang.kuota_telpon = 50;
	begadang.kuota_internet = 25; 
	cout<<"Nama paket : "<< begadang.nama_paket << endl;
	cout<<"Kuota telpon : "<< begadang.kuota_telpon << " Menit" << endl;
	cout<<"Nama internet : "<< begadang.kuota_internet << " GB" << endl;

	return 0;
	
}
