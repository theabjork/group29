#include <iostream>
#include <fstream>
#include "Superhero.h"
#include <string>
using namespace std;

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
