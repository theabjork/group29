//
//  Repositories.hpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef Repositories_hpp
#define Repositories_hpp
#include "pizza.hpp"
#include "Topping.hpp"
#include "New_product.hpp"
#include <fstream>
#include <stdio.h>
#include <vector>
using namespace std;
class Repositories{
  
private:
    vector<Pizza> the_menu_vector(string menu);
    
    
    
public:
    void add_pizza(const Pizza& pizza);
    void add_topping(const Topping& topping);
    void the_menu();
    void read_from_file();
    vector<string> parseString(string line);
    void validate_menu_input(char number);
    void add_product(const Product& product);
};



#endif /* Repositories_hpp */
