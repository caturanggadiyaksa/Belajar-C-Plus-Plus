#include <iostream>
using namespace std;

int main()
{
	//deklarasi variabel
	int arr[5];
	int i, elemen, index;
	
	cout << "Enter 5 Array elements:";
	
	for(i=0; i<5; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nindex\t\t\Position";
	
	for(i=0; i<5; i++)
	{
		cout << "\n";
		cout << i << " = " << arr[i] << "\t\t" <<i+1 << " = " << arr[i+1];
	}
	
	cout << "(nilai tidak termasuk array)";
	cout << "\n\nImportant - elemen array hanya dapat di akses dengan mengindeks array\n";
	cout << "note - Index Array selalu di awali dari 0";
	
	
	
	
	return 0;
}
