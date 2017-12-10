//
//  newclass.hpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef newclass_hpp
#define newclass_hpp
#include "topping.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

class Pizza{
    
private:
    int _number_of_toppings;
    char _crust;
    int _size;
    

public:
    Pizza();
    Pizza(int number_of_toppings, char crust, int size);
    int get_number_of_toppings() const ;
    char get_crust() const ;
    int get_size() const ;
    void set_number_of_toppings(int number);
    void set_crust(char crust);
    void set_size(int size);
   
    friend ostream& operator << (ostream& in, const Pizza& pizza);
    
    //void addTopping(Topping topping);
    
    //~Pizza();
    
    
};




#endif

