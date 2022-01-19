#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int KE;
struct Sisdig {
    int ke;
    string tugas;
    string bataspengumpulan;
};

void addStudent() {
    Sisdig sisdig;
    cout << "\n\tmasukan tugas : ";
    cin.get();
    getline(cin, sisdig.tugas); //Nouman Habib
    cout << "\n\tmasukan batas pengumpulan tugas : ";
    getline(cin, sisdig.bataspengumpulan);
    KE++;

    ofstream write;
    write.open("sisdig.txt", ios::app);
    write << "\n" << KE;
    write << "\n" << sisdig.bataspengumpulan ;
    write << "\n" << sisdig.tugas;
    write.close();
    write.open("tugaske.txt");
    write << KE;
    write.close();
    cout << "\n\tData save to file";
}

void print(Sisdig s) {
    cout << "\n\t---Stuent Data---";
    cout << "\n\tTugas ke : " << s.ke;
    cout << "\n\tName is : " << s.tugas;
    cout << "\n\tAge is : " << s.bataspengumpulan;
}

void readData() {
    Sisdig sisdig;
    ifstream read;
    read.open("sisdig.txt");
    while (!read.eof()) 
	{
        read >> sisdig.ke;
        read.ignore();
        getline(read, sisdig.tugas);
        getline(read, sisdig.bataspengumpulan);
        print(sisdig);
    }
    read.close();
}

int searchData() {
    int ke;
    cout << "\n\tEnter student id want to search : ";
    cin >> ke;
    Sisdig sisdig;
    ifstream read;
    read.open("sisdig.txt");
    while (!read.eof()) {
        read >> sisdig.ke;
        read.ignore();
        getline(read, sisdig.tugas);
        getline(read, sisdig.bataspengumpulan);
        if (sisdig.ke == ke) {
            print(sisdig);
            return ke;
        }
    }
}

void deleteData() {
    int ke = searchData();
    cout << "\n\tYou want to delete record (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
        Sisdig sisdig;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("sisdig.txt");
        while (!read.eof()) {
            read >> sisdig.ke;
            read.ignore();
            getline(read, sisdig.tugas);
            getline(read, sisdig.bataspengumpulan);
            if (sisdig.ke != ke) {
                tempFile << "\n" << sisdig.ke;
                tempFile << "\n" << sisdig.tugas;
                tempFile << "\n" << sisdig.bataspengumpulan;
            }
        }
        read.close();
        tempFile.close();
        remove("sisdig.txt");
        rename("temp.txt", "sisdig.txt");
        cout << "\n\tData deleted successfuly";
    }
    else {
        cout << "\n\tRecord not deleted";
    }
}

void updateData() {
    int ke = searchData();
    cout << "\n\tYou want to update record (y/n) : ";
    char choice;
    cin >> choice;
    if (choice == 'y') {
        Sisdig newData;
        cout << "\n\tEnter student name : ";
        cin.get();
        getline(cin, newData.tugas);
        cout << "\n\tEnter student age : ";
        getline(cin, newData.bataspengumpulan);
        Sisdig sisdig;
        ofstream tempFile;
        tempFile.open("temp.txt");
        ifstream read;
        read.open("sisdig.txt");
        while (!read.eof()) {
            read >> sisdig.ke;
            read.ignore();
            getline(read, sisdig.tugas);
            getline(read, sisdig.bataspengumpulan);
            if (sisdig.ke != ke) {
                tempFile << "\n" << sisdig.ke;
                tempFile << "\n" << sisdig.tugas;
                tempFile << "\n" << sisdig.bataspengumpulan;
            }
            else {
                tempFile << "\n"<< sisdig.ke;
                tempFile << "\n"<< newData.tugas;
                tempFile << "\n"<< newData.bataspengumpulan;
            }
        }
        read.close();
        tempFile.close();
        remove("sisdig.txt");
        rename("temp.txt", "sisdig.txt");
        cout << "\n\tData updated successfuly";
    }
    else {
        cout << "\n\tRecord not deleted";
    }
}

int main()
{
    ifstream read;
    read.open("tugaske.txt");
    if (!read.fail()) {
        read >> KE;
    }
    else {
        KE = 0;
    }
    read.close();

    while (true) {
        cout << "\n\t1.Add student data";
        cout << "\n\t2.See student data";
        cout << "\n\t3.Search student data";
        cout << "\n\t4.Delete student data";
        cout << "\n\t5.Update student data";

        int choice;
        cout << "\n\tEnter choice : ";
        cin >> choice;
        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            readData();
            break;
        case 3:
            searchData();
            break;
        case 4:
            deleteData();
            break;
        case 5:
        	updateData();
        	break;
        }
    }

}`````````````
