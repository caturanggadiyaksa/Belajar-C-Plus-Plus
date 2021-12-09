#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int A[3][4]; //array dua dimensi 3 baris 4 kolom
	
	for (int b=0;b<3;b++) //perulangan b dimulai dari 0 b kurang dari 3
	{
		for (int k=0;k<4;k++) //perulangan k dimulai dari 0 k kurang dari 
		{
			cout<<"A["<<b<<"]["<<k<<"] = "; //output A aray dimulai dari b =0  dan k dimulai dari 0
			cin>>A[b][k]; //input untuk aray 3 baris dan 4 kolom
		}
		cout << endl; //untuk baris
	}	
	for (int b=0;b<3;b++) //perulangan b dari 0 b kurang dari 3 
	{
		for (int k=0;k<4;k++) //perulangan k = 0 k kurang dari 4
		{
			cout<<A[b][k]<<" "; //output untuk menampilkan aray A index a dan k
		}
		cout << endl;
	}
getch();
}
