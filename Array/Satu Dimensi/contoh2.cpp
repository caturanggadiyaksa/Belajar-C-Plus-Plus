#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int i;
	int sum = 0, avg = 0;
	cout << " Masukan 10 Array :";
	
	for(i = 0; i < 10; i++)
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	
	cout << "\n Array Elemen is\n";
	
	for(i = 0; i < 10; i++)
	{
		cout << arr[i] << "	";
	}
	
	cout << "\n\n jumlah dari semua elemen adalah:" << sum;
	avg = sum/10;
	cout << "\n nilai tengah nya adalah:" << avg;
	
	
	
	return 0;
}
