//
//  models.hpp
//  vika​​2​​​​-​​Employee’s​​Monthly​​Salary
//
//  Created by Salome Huldís Sigurðardóttir on 4.12.2017.
//  Copyright © 2017 Salome Huldís Sigurðardóttir. All rights reserved.
//

#ifndef models_hpp
#define models_hpp
#include <fstream>
#include <iostream>
using namespace std;
#include <string>

class Employee {

private:
    string _name;
    string _SSN;
    double _salary;
    int _month;
    int _year;
    
public:
    Employee();
    Employee(string name, string SSN, double salary, int month, int year);
    friend istream& operator >> ( istream& in, Employee& employee);
    friend ostream& operator << ( ostream& out, const Employee& employee);
};

#endif /* models_hpp */
