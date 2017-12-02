//
//  toppings.cpp
//  blabla
//
//  Created by Katrin Arnardottir on 01/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "topping.hpp"
#include <iostream>
#include <string>
using namespace std;

Topping::Topping(){
    
}
Topping::Topping(char* name, double price){
    strcpy (_name, name);
    _price = price;
    
}

