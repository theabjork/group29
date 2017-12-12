#include "Topping.h"
#include <iostream>
#include <string>
using namespace std;


Topping::Topping(){

}

Topping::Topping(string name, double price){
this->name = name;
this->price = price;
}

ostream& operator << (ostream& out, Topping& toppings){

    out << toppings.name << " " << toppings.price;

return out;
}

istream& operator >> (istream& in, Topping& toppings){

in >> toppings.name >> toppings.price;
return in;
}
