#ifndef TOPPING_H
#define TOPPING_H
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

class Topping{

public:
    Topping();
    Topping(string name, double price);
    friend ostream& operator << (ostream& out, Topping& toppings);
    friend istream& operator >> (istream& in, Topping& toppings);

private:
    string name;
    double price;

};

#endif
