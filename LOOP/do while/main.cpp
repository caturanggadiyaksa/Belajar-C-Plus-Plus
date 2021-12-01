#include <iostream>
using namespace std;

int main()
{
	int nilai = 0;
	int i = 1;
	
	cout <<"Masukan Anggka";
	cin >> nilai;
	
	do
	{
		cout << endl << nilai << " * " << i << " = " << nilai * i;
		i++; // i+=1
	} 
		while(i<=5);
	
	return 0;
}
