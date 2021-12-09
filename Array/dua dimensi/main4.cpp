#include <iostream>
using namespace std;

int main()
{			//array 5 baris 2 kolom		
	int arr[5][2] = {{1, 6}, //baris pertama //1 kolom pertama //6 kolom ke 2
					{2, 7}, //baris kedua //2 kolom pertama //7 kolom ke 2
					{3, 8}, //baris ketiga //3 kolom pertama //8 kolom ke 2
					{4, 9}, //baris keempat //4 kolom pertama //9 kolom ke 2
					{5, 0}}; //baris kelima //5 kolom pertama //0 kolom ke 2

	int i, j;
	
	for (i = 0; i<5; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "arr[" <<i << "][" << j << "] = " << arr[i][j] << "\n";
		}
	}
	
	
	return 0;
}
