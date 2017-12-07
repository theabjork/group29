//
//  models.cpp
//  vika​​2​​​​-​​Employee’s​​Monthly​​Salary
//
//  Created by Salome Huldís Sigurðardóttir on 4.12.2017.
//  Copyright © 2017 Salome Huldís Sigurðardóttir. All rights reserved.
//

#include "models.hpp"

Employee::Employee() {
    _name = "";
    _SSN = "";
    _salary = 0.0;
    _month = 0;
    _year = 0;
    
}

Employee::Employee(string name, string SSN, double salary, int month, int year){
    _name = name;
    _SSN = SSN;
    _salary = salary;
    _month = month;
    _year = year;
}

istream& operator >> ( istream& in, Employee& employee) {
    cout << "Please enter name: ";
    in >> employee._name;
    cout << "Please enter SSN: ";
    in >> employee._SSN;
    cout << "Please enter salary: ";
    in >> employee._salary;
    cout << "Please enter month: ";
    in >> employee._month;
    cout << "Please enter year: ";
    in >> employee._year;
    
    
    return in;
}

ostream& operator << ( ostream& out, const Employee& employee) {
    
    out << "Employee name: " << employee._name << endl;
    out << "Employee SSN: " << employee._SSN << endl;
    out << "Employee salary: " << employee._salary << endl;
    out << "Month: " <<employee._month << endl;
    out << "Year: " << employee._year << endl;
    
    return out;
}
