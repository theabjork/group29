#include "Models.h"


Employee::Employee(string name, string SSN, double salary, int month, int year){
    this->name = name;
    this->SSN = SSN;
    this->salary = salary;
    this->month = month;
    this->year = year;
}

string Employee::get_name(){
    return this->name;
}

string Employee::get_SSN(){
    return this->SSN;
}

double Employee::get_salary(){
    return this->salary;
}

int Employee::get_month(){
    return this->month;
}
int Employee::get_year(){
    return this->year;
}


ostream& operator << ( ostream& out, const Employee& employee) {

    out << employee.name << ", " << employee.SSN << ", " << employee.salary
    << ", " << employee.month << ", " << employee.year << endl;

    return out;
}
