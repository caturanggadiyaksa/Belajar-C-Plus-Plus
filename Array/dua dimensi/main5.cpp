#include <iostream>
using namespace std;

int main()
{
	
	int arr[5][2];
	int i, j;
	int baris_posisi, kol_posisi;
	int baris_index, kol_index;
	
	cout << "Masukan 5*2 array element:";
	
	for (i = 0; i < 5; i++)
	{
		for (j=0; j <2; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	cout << "Array element (baris dengan kolom) :\n";
	for(i= 0; i < 5; i++)
	{
		for(j=0; j<2; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout <<"\n";
	}
	
	cout << "Mengakse elemen di posisi...Masukan baris dan kolom posisi....";
	cin >> baris_posisi;
	cin >> kol_posisi;
	cout << "\nElemen di baris posisi" << baris_posisi;
	cout << "dan kolom posisi" << kol_posisi << "adalah" <<arr[baris_posisi-1][kol_posisi-1];
	cout << "\n\nAkses element di index...masukan baris dan kolom index...";
	cin >> baris_index;
	cin >> kol_index;
	cout << "\nElement pada baris index" << baris_index;
	cout << "dan kolom index" << kol_index <<" adalah " << arr[baris_index][kol_index];
	
	
	return 0;
}
