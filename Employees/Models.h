#ifndef models_hpp
#define models_hpp
#include <iostream>
using namespace std;
#include <string>


class Employee {

private:
    string name;
    string SSN;
    double salary;
    int month;
    int year;

public:

    Employee(string name, string SSN, double salary, int month, int year);
    string get_name();
    string get_SSN();
    double get_salary();
    int get_month();
    int get_year();
    friend ostream& operator << ( ostream& out, const Employee& employee);
};

#endif /* models_hpp */
