//
//  pick_topp_pizza.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 13/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "pick_topp_pizza.hpp"
#include <stddef.h>

Pick_topp_pizza::Pick_topp_pizza(){
    topping_count = 0;
    toppings = NULL;
    currentToppingNum = 0;
}

Pick_topp_pizza::Pick_topp_pizza(int number_of_toppings){
    
    topping_count = number_of_toppings;
    toppings = new Topping[topping_count];
    currentToppingNum = 0;
}
/*void Pick_topp_pizza::add_topping(Topping topping){
    if(currentToppingNum < topping_count){
    toppings[currentToppingNum] = topping;
        currentToppingNum++;
    }
}*/
ostream& operator << (ostream& out, const Pick_topp_pizza& pick_topp_pizza){
    
    out << "Pizza with toppings: " << endl;
    for(int i = 0; i < pick_topp_pizza.topping_count; i++){
        out << pick_topp_pizza.toppings << endl;
    }
    
    return out;
}
istream& operator >> (istream& in, const Pick_topp_pizza& pick_topp_pizza){
  
    return in;
}



Pick_topp_pizza::~Pick_topp_pizza(){
    if(toppings != NULL){
        
        delete[] toppings;
    }
}
