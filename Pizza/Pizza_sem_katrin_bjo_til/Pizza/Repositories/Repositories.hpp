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
#include <fstream>
#include <stdio.h>
#include <vector>
class Repositories{
  
private:
    vector<Pizza> the_menu_vector(string menu);
    vector<string> properties;
    
    
public:
    void add_pizza(const Pizza& pizza);
    void the_menu();
    void read_from_file();
    void parseString(string line);
    void validate_menu_input(char number);
};



#endif /* Repositories_hpp */
