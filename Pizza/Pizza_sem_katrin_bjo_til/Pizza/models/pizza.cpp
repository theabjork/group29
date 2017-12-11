//
//  newclass.cpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "pizza.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <stddef.h>
using namespace std;

Pizza::Pizza(){
    this->name = "";
    this->size = 0;
    this->price = 0;
}

Pizza:: Pizza(string name, int size, int price){
    this->name = name;
    this->size = size;
    this->price = price;
}
string Pizza ::get_name() const {
    
    return this->name;
}
int Pizza::get_size() const {
    
    return this->size;
}
int Pizza::get_price() const {
    
    return this->price;
}
void Pizza::set_name(string newname){
    this->name = newname;
}

void Pizza::set_size(int newsize){
    this->size = newsize;
}

void Pizza::set_price(int newprice){
    this->price = newprice;
    
}


ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza: " << pizza.name << endl;
    out << "Size: " << pizza.size << endl;
    out << "Price: " << pizza.price << endl;
    
    return out;
}

istream& operator >> (istream& in, const Pizza& pizza){
    cout << "Pizza: ";
    in >> pizza.name << endl;
    cout << "Size: ";
    in >> pizza.size << endl;
    cout << "Price: ";
    in >> pizza.price << endl;
    
    return in;
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
