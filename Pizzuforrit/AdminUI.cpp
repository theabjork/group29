#include "AdminUI.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void Admin:: the_menu(){

    ifstream fin;
    string text;
    fin.open("the_menu.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin,text);
            cout << text << endl;
        }
        cout << endl << endl;
        fin.eof();
    }

    fin.close();
}
