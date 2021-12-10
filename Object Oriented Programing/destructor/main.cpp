#include <iostream>
using namespace std;

//class dan objek

//constructor == merupakan fungsi pertama kali dijalankan ketika pobject dari class tersebut dijalankan nama sama dengan class tidak memiliki return type 

//destructor == merupakan fungsi dijalankan otomatis ketika object itu musnah
class persegi //membuat class dimulai dari ketik class dan di ikuti dengan nama class
{
public:	 //acces modified public
	int sisi; //sisi
	
	//constructor
	persegi()
	{
		sisi = 4;
		cout << "Ini constructor persegi" << endl;
	}
	
	
	//copy constructor berbeda dengan constructor yg membedakan nya ada parameter di copy constructor
	persegi(const persegi & obj)
	{
		sisi = obj.sisi;
		cout << "ini copy constroctor persegi";
	}
	
	
	
	//return type
	int hitungluas() //untuk menghitung luas
	{
		return sisi* sisi; //sisi * sisi merupakan rumus untuk menghitung luas
	}
	
	~persegi()
	{
		cout << "persegi dimusnahkan" << endl;
	}
	
};
int main()
{
	{
	//object //object merupakan repretansi nyata dari class
	persegi p; //untuk membuat object diawwali dengan nama class dan di ikuti oleh nama object 
	
	//pengisisan nilai untuk tribut sisi = 4
	//tidak perlu jika ada constructor
	//p.sisi = 4; //untuk memamnggil atribut dan method class bisa dengan operator dot atau (.)
	
	cout << "sisi :" << p.sisi << endl; //mencetak sisi
	
	
	
	persegi x = p;
	
	cout << "sisi pada object x adalah" << x.sisi << endl;
	
	
							//memanggil fungsi hitungluas
	cout << "luas persegi:" << p.hitungluas() << endl; //untuk menampilkan luas persegi
	} //unttuk destructor
	return 0;
}
