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
        
        sales_options();
        add_pizza(create_pizza());

        
        /*Menu message;
        message.welcomeMessage();
        Menu opt;
        opt.options();*/
    }
    
    if(input == 'p'){
        
        
    }
    /*
    if(selection == 'd'){
        
    }
    if(selection == 'q'){
        cout << endl;
    } */
}
Pizza UserUI::create_pizza(){
    
    string name;
    cout << "What pizza would you like?" << endl;
    cin >> name; ///ATH MA EKKI EKKI GERA BIL I PIZZU!
    int size, price;
    cout << "what size?" << endl;
    cin >> size;
    cout << "what price?" << endl;
    cin >> price;
    
    Pizza pizza(name, size, price);
    return pizza;
}


void UserUI::add_pizza(const Pizza& pizza){
    pizza_repo.add_pizza(pizza);  /// ATH a ad kalla a service ekki repo!!
    cout << "Your order: " << endl;
    cout << pizza << endl;
}
void UserUI::sales_options(){
    
    cout << "Press 1 to make order: " << endl;
    cout << "Press 2 to change order: " << endl;
    char input;
    cin >> input;
    sales_validate_user_input(input);
}
void UserUI::sales_validate_user_input(char input){
    if(input == '1'){
        Repositories sales_repo;
        sales_repo.the_menu();
        Pizza pizza;
        
        
        
        
        /*cout << "Choose a number from the menu?" << endl;
         char number;
         cin >> number;
         sales_menu_validate_input(number);
         */
    }
    else {
        cout << endl;
    }
    
}




