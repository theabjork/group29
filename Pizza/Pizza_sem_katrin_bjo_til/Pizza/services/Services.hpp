//
//  Services.hpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef Services_hpp
#define Services_hpp
#include "pizza.hpp"
#include "Repositories.hpp"
#include "New_product.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

class Services{
private:
    
public:
    Services();
   

    void sales_menu_validate_input(char number);
    Pizza pizza;
    Repositories pizza_repo;
    void add_product(const Product& product);
    void add_pizza(const Pizza& pizza);
    void add_topping(vector<Topping> topping_list);
    Repositories menu_repo;
    void read_menu();
    void read_topping_menu();
    bool validatePizza(Pizza pizza);

};

#endif /* Services_hpp */
