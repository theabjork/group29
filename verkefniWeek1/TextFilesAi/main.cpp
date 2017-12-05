#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int max_size = 10;

int main()
{

    string c;
    ifstream fin;
    char input;
    fin.open("DataTextFile.txt");


    do
    {

        if(fin.is_open())
        {
            for(int i = 0; i < max_size; i++)
            {
                getline(fin, c);
                cout << c << endl;
            }
        }


        cout << "Do you wish to continue (y/n)? ";
        cin >> input;

        while (input != 'y' && input != 'n')
        {
            cout << "Do you wish to continue (y/n)? ";
            cin >> input;
        }


        if (input == 'n')
        {
            return 0;
        }

    }
    while(input != 'n');



    fin.close();


    return 0;
}
