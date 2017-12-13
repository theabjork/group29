//
//  userUI.hpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef userUI_hpp
#define userUI_hpp
#include "pizza.hpp"
#include "Services.hpp"
#include "New_product.hpp"
#include <stdio.h>

class UserUI {
    
public:
    void main_menu();
    void add_pizza(const Pizza& pizza);
    void sales_options();
    void sales_validate_user_input(char input);
    void admin_options();
    void validate_admin_input(char input);
    void validate_user_input (char input);
    Product product;
    Product create_product();
    
private:
   
    Services pizza_service;
    Services admin_services;
    Pizza create_pizza();
   
    
};


#endif /* userUI_hpp */
