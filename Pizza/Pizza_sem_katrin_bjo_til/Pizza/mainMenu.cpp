//
//  mainMenu.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 01/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "mainMenu.hpp"
#include <iostream>
#include <string>
using namespace std;

Menu::Menu(){
    
}
void Menu::welcomeMessage(){
    cout << "Welcome to FALL's Pizza" << endl << endl;
}
void Menu::options(){
    cout << "-----------------" << endl;
    cout << "Pizzas: \t \t";
}

