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
#include <stdio.h>

class UserUI {
    
public:
    void main_menu();
    
private:
    void validate_user_input (char input);
    Services pizza_service;
    
    Pizza create_pizza();
    //Employee create_employee();
    //Services employee_sevice;
    //    Employee salarySSN();
    
    
};


#endif /* userUI_hpp */
