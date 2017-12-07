#include "UI.h"
#include "Models.h"
#include <iostream>
using namespace std;

UserUI::UserUI(){
}

void UserUI::main_menu() {


    cout << "Employee's monthly salary" << endl << endl;
    cout << "1 - Add a salary record" << endl;
    cout << "2 - Get all salary records for a given SSN" << endl;
    cout << "3 - Get a total Salary for a given year and a given SSN" << endl;
    cout << "4 - Get the name of the employee with the highest total salary for a given year" << endl;
    cout << "Please choose a number: ";
    char input;
    cin >> input;

    validate_user_input(input);

}

void UserUI::validate_user_input(char input){

if(input == '1'){
employee_service.add_employee_info(employeeInfo());
}
else if (input == '2'){
cout << "Get all salary records for a given SSN" << endl;
}
else if (input == '3'){
cout << "Get total salary for a given year and SSN" << endl;
}
else if (input == '4'){
cout << "Get name with the highest total salary for given year" << endl;
}
}

Employee UserUI::employeeInfo(){

    string name, SSN;
    double salary;
    int month, year;
    cout << "Please enter name: ";
    cin >> name;
    cout << "Please enter SSN: ";
    cin >> SSN;
    cout << "Please enter salary: ";
    cin >> salary;
    cout << "Please enter month: ";
    cin >> month;
    cout << "Please enter year: ";
    cin >> year;

    Employee employee(name, SSN, salary, month, year);
    return employee;
}
