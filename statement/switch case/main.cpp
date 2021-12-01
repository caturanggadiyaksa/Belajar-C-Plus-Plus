#include <iostream>
 
using namespace std;
 
int main()
{
	
	
	
	/*switch (nama_variabel) {
  case 'nilai_1':
    // Kode program yang dijalankan jika nama_variabel == nilai_1
    break;
  case 'nilai_2':
    // Kode program yang dijalankan jika nama_variabel == nilai_2
    break;
  case 'nilai_3':
    // Kode program yang dijalankan jika nama_variabel == nilai_3
    break;
  ...
  ...
  default:
     // Kode program yang dijalankan jika tidak ada kondisi yang terpenuhi
	}*/
	
	
  char nilai;
 
  cout << "Input Nilai Anda (A - E): ";
  cin >> nilai;
 
  switch (nilai) {
  case 'A':
    cout << "Pertahankan!" << endl;
    break;
  case 'B':
    cout << "Harus lebih baik lagi" << endl;
    break;
  case 'C':
    cout << "Perbanyak belajar" << endl;
    break;
  case 'D':
    cout << "Jangan keseringan main" << endl;
    break;
  case 'E':
    cout << "Kebanyakan bolos..." << endl;
    break;
  default:
    cout << "Maaf, format nilai tidak sesuai" << endl;
  }
 
  return 0;
}
