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

class Repositories{
  
private:
    vector<Pizza> the_menu(string menu);
    
    
    
public:
    void add_pizza(const Pizza& pizza);
    void the_menu();
    
    

};



#endif /* Repositories_hpp */
