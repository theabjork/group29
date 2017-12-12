#include "SalesUI.h"
#include "AdminUI.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Menu::Menu(){

}
void Menu::welcomeMessage(){
    cout << "Welcome to FALL's Pizza" << endl << endl;
}
void Menu::options(){


    cout << "Press 1 to make order: " << endl;
    cout << "Press 2 to change order: " << endl;
    char input;
    cin >> input;
    validate_user_input(input);
}
void Menu::validate_user_input(char input){
    if(input == '1'){
        Admin admin;
        admin.the_menu();
        cout << "Choose a number from the menu?" << endl;
        int number;
        cin >> number;

        //make_order.add_pizza(create_pizza());
    }
    else {
        cout << endl;
    }
}
/*
Pizza Menu::create_pizza(int number_of_toppings){



    return Pizza();
}
*/
