#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
	COORD k = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

int main()
{
	char pr[4][25]={"Teknik Informatika", "Sistem Informasi", "Teknik Komputer", "Komputer Akuntasi"};
	char nm[10][10]={"Hafidh", "Rakha", "Ambarwati", "Hening", "Sarasayu", "Hanif", "Rikha", "Ambartina", "Hening", "Saras"};
	
	int data[10][6] = { 0,60,70,80,85,80,
						1,80,70,80,80,70,
						2,70,70,60,85,60,
						3,75,80,60,75,80,
						1,80,75,70,75,80,
						0,60,70,80,85,80,
						2,80,55,80,80,40,
						3,70,70,50,85,50,
						2,55,80,50,75,80,
						1,80,75,55,75,80,};
						
	int i, na, k, n;
	system("cls");
	printf("\n        DAFTAR NILAI ALGORITMA C++  ");
	printf("\n======================================================");
	printf("\n No.  Nama    Mahasiswa   program                       nilai                                             keterangan");
	printf("\n                                                  -----------------------------------------------------");
	printf("\n                                                   absen     Tugas    Formatif      UTS   UAS    Akhir               ");
	printf("\n---------------------------------------------------------------------------------------------------------------------");
	//
	//
	n = 0;
	
	for (i = 0; i <= 9; i++)
	{
		n++;
		na = 0.1*data[i][1]+0.1*data[i][2]+0.2*data[i][3]+0.25*data[i][4]+0.35*data[i][5];
		k = data[i][0];
		gotoxy(1,7+i);printf("%2i", n);
		gotoxy(5,7+i);printf("%s", nm[i]);
		gotoxy(22,7+i);printf("%s", pr[k]);
		gotoxy(47,7+i);printf("%2i", data[i][1]);
		gotoxy(54,7+i);printf("%2i", data[i][2]);
		gotoxy(63,7+i);printf("%2i", data[i][3]);
		gotoxy(70,7+i);printf("%2i", data[i][4]);
		gotoxy(75,7+i);printf("%2i", data[i][5]);
		gotoxy(81,7+i);printf("%2i", na);
		
		if(na >= 70)
		{
			gotoxy(86,7+i);printf("LULUS");
		}
		else if (na >= 60)
		{
			gotoxy(86,7+i);printf("HER");
		}
		else
		{
			gotoxy(86,7+i);printf("GAGAL");
		}
		
	}
	
	printf("\n------------------------------------------------------------------------------");
	
	return 0;
}
