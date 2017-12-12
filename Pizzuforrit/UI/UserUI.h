#ifndef MANUI_H
#define MANUI_H
#include <iostream>
#include "../Models/Pizza.h"
#include "../Service/Service.h"
#include "../Exceptions.h"
#include "Product.h"
using namespace std;

class UserUI {

public:
    void main_menu();
    Repositories pizza_repo;
    void sales_options();
    void admin_options();
    void validate_user_input(char input);
    void validate_user_input2(char input);
    void validate_admin_input(char input);
    void Location();

private:
    Services pizza_service;
    Services admin_services;
    Pizza create_pizza();
    Product create_product();

};
#endif
