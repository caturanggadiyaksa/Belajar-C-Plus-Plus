#include <iostream>
#include <cstring>
using namespace std;

struct paket_internet 
{
	string nama_paket;
	int kuota_telpon;
	int kuota_internet;
};
int main() 
{
	paket_internet begadang;
	paket_internet belajar;
	
	begadang.nama_paket = "Begadang";
	begadang.kuota_telpon = 50;
	begadang.kuota_internet = 25; 
	belajar.nama_paket = "Belajar";
	belajar.kuota_telpon = 0;
	belajar.kuota_internet = 50;
	
	cout<<"Nama paket : "<< begadang.nama_paket << endl;
	cout<<"Kuota telpon : "<< begadang.kuota_telpon << " Menit" << endl;
	cout<<"Nama internet : "<< begadang.kuota_internet << " GB" << endl;
	cout<<"-------------------------------" << endl;
	cout<<"Nama paket : "<< belajar.nama_paket << endl;
	cout<<"Kuota telpon : "<< belajar.kuota_telpon << " Menit" << endl;
	cout<<"Nama internet : "<< belajar.kuota_internet << " GB" << endl;
	cout<<"-------------------------------" << endl;
	
	return 0;


}
