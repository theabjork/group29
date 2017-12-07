#ifndef userUI_hpp
#define userUI_hpp
#include <iostream>
#include <string>
#include "Models.h"
#include "Services.h"
using namespace std;

class UserUI {
    private:
        void validate_user_input(char input);
        Employee employeeInfo();
        Services employee_service;
    public:
        UserUI();
        void main_menu();

};

#endif /* userUI_hpp */
