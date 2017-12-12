#include "Topping.hpp"
#include "pizza.hpp"
#include <iostream>
#include <string>
#include <stddef.h>
#include <fstream>
using namespace std;


Topping::Topping(){
    
}

Topping::Topping(string name, double price){
    
    this->name = name;
    this->price = price;
}

string Topping::get_name(){
    
    return this->name;
}
double Topping::get_price() {
    
    return this->price;
}

void Topping::set_name(string name){
    this->name = name;
}

void Topping::set_price(double price){
    this->price = price;
}

ostream& operator << (ostream& out, Topping& topping){
    
    out << topping.name;
    out << topping.price;
    
    return out;
}

istream& operator >> (istream& in, Topping& topping){
    
    in >> topping.name >> topping.price;
    return in;
}
