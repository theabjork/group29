#ifndef PIZZA_H
#define PIZZA_H
//#include "Repositories.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Pizza{

private:
    string name;
    int size;
    string price;
    string location;

public:

    Pizza();
    Pizza(string name, int size, string price, string location);
    string get_name();
    int get_size();
    string get_price();
    string get_location();
    void set_name(string name);
    void set_size(int size);
    void set_price(string price);
    void set_location(string location);

    friend ostream& operator << (ostream& in, const Pizza& pizza);
    friend istream& operator >> (istream& in, Pizza& pizza);

};




#endif

