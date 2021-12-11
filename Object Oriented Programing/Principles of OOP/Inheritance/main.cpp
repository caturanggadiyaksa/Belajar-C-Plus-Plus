#include <iostream>
#include <string.h>

using namespace std;


//inheritance

class hewan //class induk
{
protected:
	int jumlah_kaki;
	char nama[100];
	char warna[100];

public:
	
	hewan()
	{
		cout << "constructor hewan dijalankan" << endl;
	}
	//setter
	void setjumlah_kaki(int jumlah_kaki)
	{
		this->jumlah_kaki = jumlah_kaki;
	}	
	
	void setnama(char n[100])
	{
		strcpy(nama, n);
		
	}
	
	void setwarna(char w[100])
	{
		strcpy(warna, w);
	}
	
	//getter
	int getjumlah_kaki()
	{
		return jumlah_kaki;
	}
	
	char *getnama()
	{
		return nama;
	}
	
	char *getwarna()
	{
		return warna;
	}
	
};

//class turunan
class ayam:public hewan
{
private:
	int paruh;
	
public:
	
	ayam()
	{
		cout << "Constructor ayam dijalankan"  << endl;
	}
	
	
	void setparuh(int p)
	{
		paruh = p;
	}
	
	int getparuh()
	{
		return paruh;
	}
	
};


class ikan:public hewan
{
private:
	int sirip;

public:
	
	ikan()
	{
		cout << "constructor ikan dijalankan " << endl;
	}
	void setsirip(int s)
	{
		sirip = s;
		}	
		
	int getsirip()
	{
		return sirip;
	}
	
};

class anakikan:public ikan
{
	
};

//public akan menajdi member public ,protected
//protected:protected
//private member public akan menjadi private 

int main ()
{
	
	ikan myfish;
	
	myfish.setjumlah_kaki(0);
	myfish.setnama("fish");
	myfish.setsirip(2);
	myfish.setwarna("biru");
	
	cout << "nama" << myfish.getnama() << endl;
	cout << "warna" << myfish.getwarna() << endl;
	
	
	return 0;
}
