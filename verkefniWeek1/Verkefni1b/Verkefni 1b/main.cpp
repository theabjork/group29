//
//  main.cpp
//  Verkefni 1b
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

class Superhero{
private:
    string _name;
    int _age;
    char _superpower;
public:
    Superhero();
    Superhero(string name, int age, char superpower);
    friend istream& operator >> ( istream& in, Superhero& hero);
    friend ostream& operator << ( ostream& out, const Superhero& hero);
};

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

Superhero::Superhero(){
    _name = "";
    _age = 0;
    _superpower = 'n';
}

Superhero::Superhero(string name, int age, char superpower){
    _name = name;
    _age = age;
    _superpower = superpower;
}
istream& operator >> ( istream& in, Superhero& hero) {
    cout << "Please enter name: ";
    in >> hero._name;
    cout << "Please enter age: ";
    in >> hero._age;
    cout << "Please enter superpower: ";
    in >> hero._superpower;
    
    return in;
}


ostream& operator << ( ostream& out, const Superhero& hero){
    out << hero._name << " " << "(" << hero._age << ")" << ": " << hero._superpower << endl;
    if (hero._superpower == 'f'){
        cout << hero._name << " " << "(" << hero._age << ")" << ": " << "Flying " << endl;
    }
    else if (hero._superpower == 'g'){
        cout << hero._name << " " << "(" << hero._age << ")" << ": " << "Giant " << endl;
    }
    else if (hero._superpower == 'h'){
        cout << hero._name << " " << "(" << hero._age << ")" << ": " <<  "Hacker " << endl;
    }
    else if (hero._superpower == 'n'){
        cout << hero._name << " " << "(" << hero._age << ")" << ": " << "None " << endl;
    }
    else {
        cout << hero._name << " " << "(" << hero._age << ")" << ": " << "Weakling " << endl;
    }
    return out;
}
