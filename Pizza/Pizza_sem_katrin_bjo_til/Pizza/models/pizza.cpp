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

Pizza:: Pizza(){
    this->name = "";
    this->size = 0;
    this->price = "";
    this->location = "";
}

Pizza:: Pizza(string name, int size, int price, string location){
    this->name = name;
    this->size = size;
    this->price = price;
    this->location = location;
}
string Pizza ::get_name() {
    
    return this->name;
}
int Pizza::get_size(){
    
    return this->size;
}
string Pizza::get_price() {
    
    return this->price;
}
string Pizza::get_location(){
    return this->location;
}
void Pizza::set_name(string newname){
    this->name = newname;
}

void Pizza::set_size(int newsize){
    this->size = newsize;
}

void Pizza::set_price(string newprice){
    this->price = newprice;
    
}
void Pizza::set_location(string newlocation){
    location = newlocation;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza: " << pizza.name << endl;
    out << "Size: " << pizza.size << endl;
    out << "Price: " << pizza.price << "kr." << endl ;
    out << "Location" << pizza.location << endl;
    
    return out;
}

istream& operator >> (istream& in, Pizza& pizza){
    cout << "Pizza: ";
    in >> pizza.name;
    cout << "Size: ";
    in >> pizza.size;
    cout << "Price: ";
    in >> pizza.price;
    cout << "Location: ";
    in >> pizza.location;
    
    return in;
}

