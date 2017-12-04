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

