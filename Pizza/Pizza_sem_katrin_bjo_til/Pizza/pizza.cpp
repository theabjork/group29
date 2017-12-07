//
//  newclass.cpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "pizza.hpp"
#include <iostream>
#include <string>
#include <stddef.h>
using namespace std;

Pizza::Pizza(){
    _topping_count = 0;
    _topping = NULL;
}

Pizza::Pizza(int number_of_toppings){
    _topping_count = number_of_toppings;
    _topping = new Topping[_topping_count];
    
}
void Pizza::addTopping(Topping topping){
    
    
    
}

Pizza::~Pizza(){
    
    if(_topping != 0){
        delete[] _topping;
    }
}

