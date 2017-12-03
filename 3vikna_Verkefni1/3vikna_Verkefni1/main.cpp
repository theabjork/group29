
//  main.cpp
//  3vikna_Verkefni1
//
//  Created by Katrin Arnardottir on 28/11/2017.
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
    Superhero(string name, int age, char superpower){
        _name = name;
        _age = age;
        _superpower = superpower;
    }
    Superhero(){
        _name = "";
        _age = 0;
        _superpower = 'n';
    }
    
};

int main(){
    
    Superhero superhero;
    ofstream fout;
    
    fout.open("textoutput2.txt");
    
    fout << "lalalal" << endl;
    int i = 7;
    fout << i;
    
    fout.close();

    
    
    return 0;
}
