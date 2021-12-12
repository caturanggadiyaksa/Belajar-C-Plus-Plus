#include <iostream>
#include <string.h>

using namespace std;

	//polymorphism banyak bentujk
	//true polymorphism  dilakukan menggunakan fungsi overriding
	
	//trivial polymorphism deng fungsi overloading {jumlah, letak, tipe argumen}
	
	
	class unggas
	{
	protected:
		int jumlahkaki;
		char warna;
		
	public:
		unggas()
		{
			cout << "constructor unggas" << endl;
		}
		void setjumlahkaki(int jumlahkaki)
		{
			this-> jumlahkaki = jumlahkaki;
		}
		
		int getjumlahkaki()
		{
			return jumlahkaki;
		}
		
		void setwarna(char w[100])
		{
			strcpy(warna,w);
		}
		
		char getwarna()
		{
			return warna;
		}
		
		void makan(int x)
		{
			cout << "hewan makan sebanyak" << x << "piring" << endl;
		}
		
		void makan(char y)
		{
			cout << "hewan makan " << y << "sebanyak " << x << "piring" << endl;
		}
		
		void makan(char y[100], int x)
		{
			cout << "hewan mkan" << y << "." <<endl;
		}
		
		void makan (char x[80])
		{
			cout << "hewan makan" << x << "!" << endl;
		}
	};
	
	class ayam:public unggas
	{
	public:
		ayam()
		{
			cout << "constructor ayam" << endl;
			}	
	};
	
	class burung:public unggas
	{
		burung 	()
		{
			cout << "contrucyor burung" << endl;
		}
	};
	
	class bebek:public unggas
	{
		bebek()
		{
			cout << "constructor bebek" <<  endl;
			}	
	};
	



int main()
{
	
	ayam a;
	
	//fungsi overloading
	a.makan(5);
	a.makan("cacing", 2)
	
	
	return 0;
}


