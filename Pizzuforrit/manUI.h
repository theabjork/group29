#ifndef MANUI_H
#define MANUI_H
#include <iostream>
#include "Pizza.h"
#include "Service.h"
#include "Exceptions.h"
using namespace std;

class UserUI {

public:
    void main_menu();
    Repositories pizza_repo;
    void sales_options();
    void validate_user_input(char input);
    void Location();

private:
    Services pizza_service;
    Pizza create_pizza();

};
#endif
