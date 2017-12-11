//
//  Repositories.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "Repositories.hpp"
#include <fstream>
#include <string>
using namespace std;

void Repositories::add_pizza(const Pizza& pizza){
    ofstream fout;
    fout.open("pizza.txt", ios::app);
    if(fout.is_open()){
        fout << pizza;
        fout.close();
        
    }
    else{
        ///trow errror
    }
}

void Repositories:: the_menu(){
    
    ifstream fin;
    string text;
    fin.open("the_menu.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin,text);
            cout << text << endl;
        }
        fin.eof();
    }
    fin.close();
}

void Repositories:: read_from_file(){
    
    ifstream fin("the_computer_menu.txt");
    if (fin.is_open()){
        string line;
        while(getline(fin, line)){
            parseString(line);
        }
    }
    else{
        cout << "unable to read from file";
    }
}

vector<string> Repositories:: parseString(string line){

        string property = "";
        vector<string> properties;
        for(unsigned int i = 0; i < line.length(); i++){
            if(line[i] == ','){
                properties.push_back(property);
                property = "";
            }
            else{
                property += line[i];
            }
        }
    return properties;
}

void Repositories::validate_menu_input(char number){
    vector<string> properties;
    if(number == '1'){
        cout << properties[1] << endl;
    }
    
}


