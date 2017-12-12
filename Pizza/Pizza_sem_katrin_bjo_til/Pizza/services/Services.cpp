//
//  Services.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "Services.hpp"
#include <iostream>
#include "pizza.hpp"
using namespace std;
Services:: Services(){
    
    
}

void Services::read_menu(){
    menu_repo.the_menu();
    
}
void Services::sales_menu_validate_input(char number){
   
   
    menu_repo.read_from_file();
    if(number == '1'){
        menu_repo.validate_menu_input(number);
    }
}

void Services:: add_product(const Product& product){
    menu_repo.add_product(product);
    
    
}


    
    
    
    
    
    

