#include <iostream>
using namespace std;

//class dan objek

class persegi //membuat class dimulai dari ketik class dan di ikuti dengan nama class
{
public:	 //acces modified public
	int sisi; //sisi
	
	//return type
	int hitungluas() //untuk menghitung luas
	{
		return sisi* sisi; //sisi * sisi merupakan rumus untuk menghitung luas
	}
	
};
int main()
{
	//object //object merupakan repretansi nyata dari class
	persegi p; //untuk membuat object diawwali dengan nama class dan di ikuti oleh nama object 
	
	//pengisisan nilai untuk tribut sisi = 4
	p.sisi = 4; //untuk memamnggil atribut dan method class bisa dengan operator dot atau (.)
	
	cout << "sisis :" << p.sisi << endl; //mencetak sisi
	
	
							//memanggil fungsi hitungluas
	cout << "luas persegi:" << p.hitungluas() << endl; //untuk menampilkan luas persegi
	
	return 0;
}
