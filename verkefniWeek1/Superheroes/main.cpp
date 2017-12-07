#include <iostream>
#include <fstream>
#include "Superhero.h"
#include <string>
using namespace std;

int main(){

    Superhero superhero;
    ifstream fin;
    ofstream fout;
    char answer;
    string text;
    fout.open("textoutput.txt", ios::app);
    fin.open("textoutput.txt");

    if(!fout.eof()){

         if(fout.is_open()){
       do{
        cin >> superhero;
        fout << superhero;
        cout << "Would you like to add another superhero?(y/n)" << endl;
        cin >> answer;
       }while(answer == 'y');
    }
    }
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin, text);
            cout << text << endl;
        }
        cout << endl << endl;
        fin.eof();

    }
    fout.close();
    fin.close();

    return 0;
}
