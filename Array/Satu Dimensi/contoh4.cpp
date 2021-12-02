#include <iostream>
using namespace std;

int main()
{
  int arr[10];
  int i, position, index;
  
  cout << "Masukan 10 Array elements :";
  
  for(i=0; i<10; i++)
  {
    cin >> arr[i];
  } 
  
  cout << "Mengakses element di position...Enter....";
  cin >> position;
  
  cout << "\nElement di posisi" << position << " adalah "  << arr[position+1];
  cout << "\nMengakses element di index....Masukan index.....":
  cin >> index;
  
  cout << "\nElemen di index" << index << " adalah " << arr[index];
  
  
  
  
  return 0;
}
