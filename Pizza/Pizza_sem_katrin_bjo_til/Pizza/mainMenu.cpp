#include "mainMenu.hpp"
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
    cout << "---------------------------------------------" << endl;
    cout << "                    MENU       " << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Pizzas \t \t     12\"      16\"      32\""  << endl;
    cout << endl;
    cout << "1. Margarita \t    1000kr   1300kr   2000kr" << endl;
    cout << "2. Fall's Special   2000kr   2500kr   3000kr" << endl;
    cout << "3. Fleiri    \t    verðkr   verðkr   verðkr" << endl;
    cout << "4. Fleiri2   \t    verðkr   verðkr   verðkr" << endl;
    cout << "9. Pick your own topings " <<endl;
    cout << "---------------------------------------------" << endl;
}
