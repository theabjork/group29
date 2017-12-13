#include "AdminRepository.hpp"
#include <string>
#include <fstream>
using namespace std;

void AdminRepo:: the_menu(){
    
    ofstream fout;
    fout.open("the_menu.txt");
    if(fout.is_open()){
        fout << "---------------------------------------------" << endl;
        fout << "                    MENU       " << endl;
        fout << "---------------------------------------------" << endl;
        fout << "Pizzas \t \t     12\"      16\"      32\""  << endl;
        fout << endl;
        fout << "1. Margarita \t    1000kr   1300kr   2000kr" << endl;
        fout << "2. Fall's Special   2000kr   2500kr   3000kr" << endl;
        fout << "3. Hawai     \t    2500kr   3000kr   3500kr" << endl;
        fout << "4. Svepperoni\t    2500kr   3000kr   3500kr" << endl;
        fout << "5. Pick your own toppings " << endl;
        fout.close();
}
}

void AdminRepo:: topping_menu(){
    
    ofstream fout;
    fout.open("the_menu.txt", ios::app);
    if(fout.is_open()){
        fout << "Pepperoni";
        fout << "Ham";
        fout << "Banana";
        fout << "Onion";
        fout <<  "Mushrooms";
        fout <<  "Cream Cheese";
      
        fout.close();
        
}
}
