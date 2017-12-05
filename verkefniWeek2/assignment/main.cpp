//
//  main.cpp
//  vika​​2​​​​-​​Employee’s​​Monthly​​Salary
//
//  Created by Salome Huldís Sigurðardóttir on 4.12.2017.
//  Copyright © 2017 Salome Huldís Sigurðardóttir. All rights reserved.
//

#include "models.hpp"
#include "userUI.hpp"


#include <fstream>
#include <iostream>
//using namespace std;

int main() {
    UserUI user;
    Employee employee;
  
    ifstream fin;
    ofstream fout;
    string text;
    fout.open("salaryFile.txt", ios::app);
    fin.open("salaryFile.txt");
    if(fout.is_open()){
        cin >> employee;
        cout << employee;
    }
    fout.close();
    
   
    
    
   
    return 0;
}
