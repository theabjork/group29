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

void Services::sales_menu_validate_input(char number){
   
    Repositories menu_repo;
    menu_repo.read_from_file();
    if(number == '1'){
        menu_repo.validate_menu_input(number);
    }
}


    
    
    
    
    
    

