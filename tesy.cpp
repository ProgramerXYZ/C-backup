#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>
using namespace std;
void f()
{
}

int main()
{
    int temp = 1, tempz = 0;

    ofstream outfile("data.txt");
    outfile << temp;
    outfile.close();
    ifstream infile("data.txt");

    if (infile >> temp)
    {
        string nothin = "";
        cout << "The clculator has been updated.\nType coutinue to downlaoad or if no type no!:";
        cin >> nothin;
        if (nothin == "no" || nothin == "NO")
        {
            return 0;
        }
        vector<string> downloading = {"downloading.", "downloading..", "downloading..."};

        vector<string> installing = {"installing.", "installing..", "installing..."};
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                Sleep(500);
                cout << downloading[j] << endl;
                Sleep(500);
                system("cls");
            }
        }

        Sleep(500);
        cout << "DOWNLOADING COMPLETED." << "Type continue to install the update.\n";
        cin >> nothin;
        Sleep(2000);
        system("cls");
        for (int i = 0; i < 4; i++)

        {
            for (int j = 0; j < 3; j++)
            {
                Sleep(500);
                cout << installing[j] << endl;
                Sleep(500);
                system("cls");
            }
        }
        cout << "Installation completed" << endl;
        Sleep(1000);
        system("cls");
        cout << "Update was successful!";
    }
    // "data.txt" = 0 closing "data.txt" // (
    infile.close();
    ofstream outfile2("data.txt");
    outfile << tempz;
    outfile2.close();

    return 0;
}