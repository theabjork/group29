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
/*vector<Pizza> Repositories:: the_menu(string menu){
    
        read_from_files();
        for (int i = 0; i < allEmployees.size(); i++){
            if (allEmployees[i].get_SSN() == SSN){
                sameSSN.push_back(allEmployees[i]);
            }
        }
        
        return sameSSN;
    }
 */
    
