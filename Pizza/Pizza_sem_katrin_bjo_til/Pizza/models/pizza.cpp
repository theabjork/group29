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
    _number_of_toppings = 0;
    //_topping = NULL;
}

Pizza::Pizza(int number_of_toppings, char crust, int size){
    _number_of_toppings = number_of_toppings;
    //_topping = new Topping[_topping_count];
    
}
int Pizza ::get_number_of_toppings() const {
    
    return _number_of_toppings;
}
char Pizza::get_crust() const {
    
    return _crust;
}
int Pizza::get_size() const {
    
    return _size;
}
void Pizza::set_number_of_toppings(int number){
    _number_of_toppings = number;
}

void Pizza::set_crust(char crust){
    _crust = crust;
}

void Pizza::set_size(int size){
    _size = size;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza with " << pizza._number_of_toppings << " toppings and ";
    out << pizza._crust << " crust " << pizza._size << " inches ";
    
    return out;
}



//void Pizza::addTopping(Topping topping){
    
    
/*
}

Pizza::~Pizza(){
    
    if(_topping != 0){
        delete[] _topping;
    }
}
*/
