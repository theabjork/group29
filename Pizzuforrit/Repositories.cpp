#include "Repositories.h"
using namespace std;

void Repositories::add_pizza(const Pizza& pizza){
    ofstream fout;
    fout.open("pizza.txt", ios::app);
    if(fout.is_open()){
        fout << pizza;
        fout.close();
    }
}

void Repositories:: the_menu(){

    ifstream fin;
    string text;
    fin.open("the_menu.txt");
    if(fin.is_open()){
        while(!fin.eof()){
            getline(fin,text);
            cout << text << endl;
        }
        fin.eof();
    }
    fin.close();
}

void Repositories::read_from_file(){
    ifstream fin;
    Pizza P;
    allPizzas.clear();
    fin.open("the_computer_menu.txt");
    string file;

    if (fin.is_open()){
        while(!fin.eof());
        Pizza P;
        fin >> file;

          stringstream ss(file);
            string item;
            int counter = 1;
            while(getline(ss, item, ',')){
                if (counter == 1){
                    P.set_name(item);
                }
                else if (counter == 2){
                    stringstream anotherss(item);
                    int x = 0;
                    anotherss >> x;
                    P.set_size(x);
                }
                else if (counter == 3){
                    P.set_price(item);
                }
                else if (counter == 4){

                    P.set_location(item);
                }
                }
                counter++;
            }
            allPizzas.push_back(P);
    fin.close();
}
  /*
        string line;
        while(getline(fin, line)){
            parseString(line);
        }
    }
    else{
        cout << "unable to read from file";
    }
}

*/

vector<string> Repositories::parseString(string line){

        string property = "";
        vector<string> properties;
        for(unsigned int i = 0; i < line.length(); i++){
            if(line[i] == ','){
                properties.push_back(property);
                property = "";
            }
            else{
                property += line[i];
            }
        }
    return properties;
}

void Repositories::validate_menu_input(char number){
    vector<string> properties;
    if(number == '1'){
        cout << properties[1] << endl;
    }
}

