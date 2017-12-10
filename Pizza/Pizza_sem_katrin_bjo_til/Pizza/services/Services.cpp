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

void Services::add_pizza(const Pizza& pizza){
    pizza_repo.add_pizza(pizza);
    cout << "Your order: " << endl;
    cout << pizza << endl;
}
void Services::sales_options(){
    
    cout << "Press 1 to make order: " << endl;
    cout << "Press 2 to change order: " << endl;
    char input;
    cin >> input;
    sales_validate_user_input(input);
}
void Services::sales_validate_user_input(char input){
    if(input == '1'){
        Repositories sales_repo;
        sales_repo.the_menu();
        cout << "Choose a number from the menu?" << endl;
        int number;
        cin >> number;
        
       
    }
    else {
        cout << endl;
    }
}
    
    
    
    
    
    
    

