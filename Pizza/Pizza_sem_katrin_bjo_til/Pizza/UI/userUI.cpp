//
//  userUI.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "userUI.hpp"
#include "pizza.hpp"
#include "Services.hpp"
#include <iostream>
using namespace std;

void UserUI:: main_menu(){
    
    while(true){
    
    cout << "Welcome to FALL's Pizza" << endl << endl;
    char input = '\0';
    cout << "Press a for Administration" << endl;
    cout << "Press s for Sales" << endl;
    cout << "Press p for Pizzaiolos" << endl;
    cout << "Press d for Delivery" << endl;
    cout << "Press q to quit" << endl;
    cout << "Selection: ";
    cin >> input;
    validate_user_input (input);
        
    }
}

void UserUI::validate_user_input (char input){
    
    if(input == 'a'){
       
        cout << "Hello Administrator" << endl;
    }
    if(input == 's'){
        pizza_service.sales_options();
        pizza_service.add_pizza(create_pizza());
        
        
        
        /*Menu message;
        message.welcomeMessage();
        Menu opt;
        opt.options();*/
    }
    /*
    if(selection == 'p'){
        
    }
    if(selection == 'd'){
        
    }
    if(selection == 'q'){
        cout << endl;
    } */
}
Pizza UserUI::create_pizza(){
    int number_of_toppings, size;
    char crust;
    cout << "how many toppings?" << endl;
    cin >> number_of_toppings;
    cout << "what type of crust?" << endl;
    cin >> crust;
    cout << "what size?" << endl;
    cin >> size;
    
    Pizza pizza(number_of_toppings, crust, size);
    return pizza;
}




