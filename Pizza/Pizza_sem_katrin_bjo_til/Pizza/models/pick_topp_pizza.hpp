//
//  pick_topp_pizza.hpp
//  Pizza
//
//  Created by Katrin Arnardottir on 13/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef pick_topp_pizza_hpp
#define pick_topp_pizza_hpp

#include <stdio.h>
#include "Topping.hpp"
#include <iostream>

class Pick_topp_pizza{
private:
    Topping* toppings;
    int topping_count;
    int currentToppingNum;
    
public:
    Pick_topp_pizza();
    Pick_topp_pizza(int number_of_toppings);
    //void add_topping(Topping topping1);
    ~Pick_topp_pizza();
    friend ostream& operator << (ostream& out, const Pick_topp_pizza& pick_topp_pizza);
    friend istream& operator >> (istream& in, const Pick_topp_pizza& pick_topp_pizza);
    
    
};





#endif /* pick_topp_pizza_hpp */
