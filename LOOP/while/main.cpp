#include <iostream>
using namespace std;

int main()
{
	int nilai = 0;
	int i = 1;
	
	cout<<"Masukan Angka";
	cin >> nilai;
	
	while(i<=10)
	{
		cout << endl << nilai << " * " << i << " = " << nilai * i;
		i++;  //i+=1
	}
	
	return 0;
}
