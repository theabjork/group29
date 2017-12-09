//
//  userUI.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "userUI.hpp"
#include <iostream>
using namespace std;

void UserUI:: main_menu(){
    
    while(true){
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
        Admin admin;
        cout << "Hello Administrator" << endl;
    }
    if(selection == 's'){
        Menu message;
        message.welcomeMessage();
        Menu opt;
        opt.options();
    }
    if(selection == 'p'){
        
    }
    if(selection == 'd'){
        
    }
    if(selection == 'q'){
        cout << endl;
    }
}
