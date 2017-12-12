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
    void add_product(const Product& product);
    Repositories menu_repo;
    void read_menu();
    
    
    
};

#endif /* Services_hpp */
