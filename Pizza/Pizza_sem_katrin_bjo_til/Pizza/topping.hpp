//
//  toppings.hpp
//  blabla
//
//  Created by Katrin Arnardottir on 01/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef toppings_hpp
#define toppings_hpp
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Topping{
    
private:
    char _name[32];
    double _price;
    
public:
    Topping();
    Topping(char* name, double price);
    
    
    
    
};

#endif /* toppings_hpp */
