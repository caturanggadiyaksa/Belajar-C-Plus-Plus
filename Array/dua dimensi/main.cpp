#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int A[3][4]={{3,4,8,0},{3,9,2,1},{6,3,0,2}}; //3 untuk jumlah baris dari aray nya //4 untuk jumlah kolom nya
	
	for (int b=0;b<3;b++) //perulangan b dimulai dari 0 dan b kurang dari 3
	{
		for (int k=0;k<4;k++) //perulangan k dimulai dari nol k kurang dari 4
		{
			cout<<A[b][k]<<" "; //mencetak array A index b dan index k dimulai dari 0 //[b] merupakan jumlah baris dan [k] merupakan jumlah kolom nya
		}
	cout << endl;
	}
getch(); //terdapat di library conio.h //bisa pake return 0; dan hapus conio.h
}
