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
#include <stdio.h>
#include <iostream>
using namespace std;

class Services{
private:
    
public:
    Services();
    void add_pizza(const Pizza& pizza);
    Repositories pizza_repo;
    void sales_options();
    void sales_validate_user_input(char input);
    
    
    
    
    
    
};

#endif /* Services_hpp */
