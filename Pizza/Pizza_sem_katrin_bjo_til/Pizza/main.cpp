#include <iostream>
#include <string>
#include "mainMenu.hpp"
#include "mainUI.hpp"
#include <fstream>
using namespace std;
    
int main(){
    Menu message;
    MainUI userinterface;
    message.welcomeMessage();
    Menu opt;
    opt.options();
    userinterface.startUI();
  
        
    return 0;
}
