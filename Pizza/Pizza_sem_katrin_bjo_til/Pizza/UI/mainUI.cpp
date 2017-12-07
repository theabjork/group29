//
//  newclass.cpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "mainUI.hpp"
#include "SalesUI.hpp"
#include "AdminUI.hpp"
#include <iostream>
#include <string>
using namespace std;

MainUI::MainUI(){
    
}

void MainUI:: startUI(){
    
    char selection = '\0';
        cout << "Press a for Administration" << endl;
        cout << "Press s for Sales" << endl;
        cout << "Press p for Pizzaiolos" << endl;
        cout << "Press d for Delivery" << endl;
        cout << "Press q to quit" << endl;
        cout << "Selection: ";
        cin >> selection;
        
        if(selection == 'a'){
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


