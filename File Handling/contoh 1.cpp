#include <iostream>
#include <fstream>



void bacafile()
	{
		
		ifstream myfile("fileku.txt");
		string line;
		
		if(myfile.is_open())
		{
			while(getline(myfile, line))
			{
				cout << line << endl;
			}
			myfile.close();
		}
		else
		{
			cout << "File gagal dibuka!!!";
		}
	}

int  main ()
{
  bacafile();
  
  return 0;
}
