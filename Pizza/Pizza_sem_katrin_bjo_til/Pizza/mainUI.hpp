//
//  newclass.hpp
//  blabla
//
//  Created by Katrin Arnardottir on 30/11/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#ifndef newclass_hpp
#define newclass_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class MainUI{
    
private:
    char _admin;
    char _baker;
    char _sales;
    char _delivery;
    
public:
    MainUI();
    void startUI();
    //friend ostream& operator << (ostream& outs, MainUI& mainUI);
    

};




#endif

