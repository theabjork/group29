#include "Topping.hpp"
#include "pizza.hpp"
#include <iostream>
#include <string>
#include <stddef.h>
#include <fstream>
#include <vector>
using namespace std;


Topping:: Topping(){
    
    
}

Topping:: Topping(string name, int price){
    
    this->name = name;
    this->price = price;
}


string Topping::get_name() const{
    return this-> name;
}

int Topping::get_price()const{
    return this->price;
}

ostream& operator << (ostream& out, vector<Topping>& topping_list){
    for (unsigned int i = 0; i < topping_list.size(); i++)
    {
        out << "Name of topping  : " << topping_list[i].get_name() << endl;
        out << "Price: " << topping_list[i].get_price() << endl;
    }
    return out;
}



istream& operator >> (istream& in, vector<Topping>& topping_list)
{
    int number_of_toppings;
    cout << "How many toppings: ";
    in >> number_of_toppings;
    
    //topping_list.push_back(number_of_toppings);

    return in;
}
