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
    int price;
    

public:
    Pizza();
    Pizza(string name, int size, int price);
    string get_name();
    int get_size();
    int get_price();
    void set_name(string name);
    void set_size(int size);
    void set_price(int price);
    friend ostream& operator << (ostream& in, const Pizza& pizza);
    friend istream& operator >> (istream& in, Pizza& pizza);

};




#endif

