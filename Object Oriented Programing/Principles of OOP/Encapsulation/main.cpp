#include <iostream>
#include <string.h>

using namespace std;

//akses modifier
//private, protected dan 
//public dapet diakses class manapun

class mobil
{
private:	
	char platnomor[100];
	char warna[100];
	int kecepatan;
	
public:
	void berjalan()
	{
		cout << "mobil berjalan" << endl;
	}
	
	//setter digunakan untuk mengset nilai nilai atribut
	void setplatnomor(char platnomor[100])
	{
		strcpy(this->platnomor,platnomor);
	}
	
	void setwarna(char w[100])
	{
		strcpy(warna, w);
	}
	
	void setkecepatan(int k)
	{
		kecepatan = k;
	}
	//getter digunakan ubtuk mendapatkan nilai nilai atribut
	char *getplatnomor()
	{
		return platnomor;
	}
	
	char *getwarna()
	{
		return warna;
	}
	
	int getkecepatan()
	{
		return kecepatan;
	}
	
		
};

int main()
{
	//object
	mobil mycar;
	
	mycar.setplatnomor("B12365XYZ");
	mycar.setwarna("merah");
	mycar.setkecepatan(20);
	
	cout << mycar.getplatnomor() << endl;
	cout << mycar.getwarna() << endl;
	cout << mycar.getkecepatan() <<  endl;
	
	mycar.berjalan();
	
	return 0;
}
