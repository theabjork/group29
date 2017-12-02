//
//  main.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 01/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//


#include <iostream>
#include <string>
#include "mainMenu.hpp"
#include "mainUI.hpp"
using namespace std;
    
int main(){
    Menu message;
    MainUI userinterface;
    message.welcomeMessage();
    userinterface.startUI();
        
    return 0;
}
