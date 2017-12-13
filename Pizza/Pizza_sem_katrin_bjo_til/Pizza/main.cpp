#include <iostream>
#include <string>
#include "userUI.hpp"
#include "Repositories.hpp"
#include <fstream>
using namespace std;


int main(){
    
    UserUI ui;
    ui.main_menu();
    cout << "PRINTING THE MENU" << endl;
    Repositories repo;
    repo.the_menu();
    
    
    return 0;
}
