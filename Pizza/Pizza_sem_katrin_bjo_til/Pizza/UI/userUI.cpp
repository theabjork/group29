//
//  userUI.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 09/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "userUI.hpp"
#include "pizza.hpp"
#include "New_product.hpp"
#include "Services.hpp"
#include <iostream>
using namespace std;

void UserUI:: main_menu(){
    
    //while(true){
    
    cout << "Welcome to FALL's Pizza" << endl << endl;
    char input = '\0';
    cout << "Press a for Administration" << endl;
    cout << "Press s for Sales" << endl;
    cout << "Press p for Pizzaiolos" << endl;
    cout << "Press d for Delivery" << endl;
    cout << "Press q to quit" << endl;
    cout << "Selection: ";
    cin >> input;
    cout << endl;
        
    validate_user_input (input);
        
    //}
}

void UserUI::validate_user_input (char input){
    
    if(input == 'a'){
       
        cout << "Hello Administrator" << endl;
        admin_options();
    }
    if(input == 's'){
        
        sales_options();
        add_pizza(create_pizza());

        
        /*Menu message;
        message.welcomeMessage();
        Menu opt;
        opt.options();*/
    }
    
    if(input == 'p'){
        
        
    }
    /*
    if(selection == 'd'){
        
    }
    if(selection == 'q'){
        cout << endl;
    } */
}
Pizza UserUI::create_pizza(){
    
    string name, location;
    cout << "What pizza would you like?" << endl;
    cin >> name; ///ATH MA EKKI EKKI GERA BIL I PIZZU!
    int size, price;
    cout << "what size?" << endl;
    cin >> size;
    cout << "what location:" << endl;
    cin >> location;
    
    Pizza pizza(name, size, price, location);
    return pizza;
}


void UserUI::add_pizza(const Pizza& pizza){
    pizza_service.add_pizza(pizza);
    cout << "Your order: " << endl;
    cout << pizza << endl;
}
void UserUI::sales_options(){
    
    cout << "Press 1 to make order: " << endl;
    cout << "Press 2 to change order: " << endl;
    char input;
    cin >> input;
    sales_validate_user_input(input);
}
void UserUI::sales_validate_user_input(char input){
    if(input == '1'){
        Repositories sales_repo;
        sales_repo.the_menu();
        Pizza pizza;
        
        
        /*cout << "Choose a number from the menu?" << endl;
         char number;
         cin >> number;
         sales_menu_validate_input(number);
         */
    }
    else {
        cout << endl;
    }
    
}

void UserUI::admin_options(){
    
    cout << "Press 1 to add a pizza to menu." << endl;
    cout << "Press 2 to add a topping" << endl;
    char input;
    cin >> input;
    validate_admin_input(input);
    
}
void UserUI::validate_admin_input(char input){
   
     if(input == '1'){
         admin_services.read_menu();
         create_product();
         
         admin_services.add_product(create_product());
     }
     if(input == '2'){
         admin_services.read_topping_menu();
         //create_topping();
         //admin_services.add_topping(create_topping());
     }
}
/*Topping UserUI::create_topping(){ /////ATH!!! VIRKAR ALLS EKKI RETT!
    int how_many;
    vector<Topping> topping_list;
    cout << "How many toppings would you like to add: ";
    cin >> how_many;
    for(int i = 0; i < how_many; i++){
        cin >> topping_list[i];
    }
    
    return topping_list;

}*/

Product UserUI::create_product(){

    string name;
    int price12, price16, price32;
    
    cout << "Enter name of pizza: " << endl;
    cin >> name;
    cout << "Enter price for 12\": " << endl;
    cin >> price12;
    cout << "Enter price for 16\": " << endl;
    cin >> price16;
    cout << "Enter price for 32\": " << endl;
    cin >> price32;
    
    Product product(name, price12, price16, price32);
    
    return product;
}





