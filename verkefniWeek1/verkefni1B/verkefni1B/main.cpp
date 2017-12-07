//
//  main.cpp
//  verkefni1B
//
//  Created by Salome Huldís Sigurðardóttir on 28.11.2017.
//  Copyright © 2017 Salome Huldís Sigurðardóttir. All rights reserved.
//

 /*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  
    ofstream fout;
    fout.open("textOutout.txt");
    
    fout << "Writing to a file!" << endl;
    int i = 7;
    fout << i;
    
    */
   
#include <iostream>
#include <fstream>
#include <string>
    
    using namespace std;
    
    int main()
    {
        bool start = true;
        string text;
        ofstream fout;
        fout.open("textOutout.txt", ios::app);
        if(fout.is_open()){
            cout << "OPEN" << endl;
        }
        while(start == 1) {
            getline(fin, text);
            if(text == "\\"){
                
                break;
            }
            cout << text;
            fout << text;
            
        }
        fout.close();
        return 0;
    }

// return 0;
//}

