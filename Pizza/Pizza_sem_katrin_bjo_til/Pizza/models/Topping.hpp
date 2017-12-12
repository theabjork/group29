#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>


using namespace std;

class Topping{
    
public:
    Topping();
    Topping(string name, double price);
    string get_name();
    double get_price();
    void set_name(string name);
    void set_price(double price);
    friend ostream& operator << (ostream& out, Topping& topping);
    friend istream& operator >> (istream& in, Topping& topping);
    
private:
    string name;
    double price;
    
    
    
};

#endif

