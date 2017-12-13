//
//  newclass.hpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef newclass_hpp
#define newclass_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Pizza{
    
private:
    string name;
    int size;
    string price;
    string location;

public:
    
    Pizza();
    Pizza(string name, int size, int price, string location);
    string get_name();
    int get_size();
    string get_price();
    string get_location();
    void set_name(string name);
    void set_size(int size);
    void set_price(string price);
    void set_location(string newlocation);
    friend ostream& operator << (ostream& in, const Pizza& pizza);
    friend istream& operator >> (istream& in, Pizza& pizza);

};




#endif

