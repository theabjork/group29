#include "Pizza.h"
#include <fstream>
#include <string>
#include <stddef.h>
using namespace std;

Pizza:: Pizza(){
    this->name = "";
    this->size = 0;
    this->price = "";
    this->location = "";
}

Pizza:: Pizza(string name, int size, string price, string location){
    this->name = name;
    this->size = size;
    this->price = price;
    this->location = location;
}
string Pizza::get_name() {

    return this->name;
}
int Pizza::get_size(){

    return this->size;
}
string Pizza::get_price() {

    return this->price;
}
string Pizza::get_location(){
    return this->location;
}
void Pizza::set_name(string newname){
    name = newname;
}

void Pizza::set_size(int newsize){
    size = newsize;
}

void Pizza::set_price(string newprice){
    price = newprice;
}
void Pizza::set_location(string newlocation){
    location = newlocation;
}

ostream& operator << (ostream& out, const Pizza& pizza){
    out << "Pizza: " << pizza.name << endl;
    out << "Size: " << pizza.size << endl;
    out << "Price: " << pizza.price << "kr." << endl ;

    return out;
}

istream& operator >> (istream& in, Pizza& pizza){
    cout << "Pizza: ";
    in >> pizza.name;
    cout << "Size: ";
    in >> pizza.size;
    cout << "Price: ";
    in >> pizza.price;

    return in;
}

/*

void Pizza::addTopping(Topping topping){

    toppings.push_back(topping);

}

void Pizza::write(ofstream& fout) const{

    int tCount = toppings.size();

fout.write((char*)(&tCount), sizeof(int));

for(int i = 0; i < tCount; i++){
    fout.write((char*)(&toppings.at(i)), sizeof(Topping));
}

}

void Pizza::read(ifstream& fin){

int tCount;
fin.read((char*)(&tCount), sizeof(int));

Topping topping;
    for(int i = 0; i < tCount; i++){
    fin.read((char*)(&topping), sizeof(Topping));
    addTopping(topping);
    }

}
istream& operator >> (istream& in, Pizza& pizza){

int toppingCount;
in >> toppingCount;

Topping topping;
    for(int i = 0; i < pizza.toppings.size(); i++){
    in >> topping;
    pizza.addTopping(topping);
    }

return in;
}

ostream& operator << (ostream& out, const Pizza& pizza){

out << "Pizza with toppings: " << endl;

for(int i = 0; i < pizza.toppings.size(); i++){
    out << pizza.toppings.at(i) << endl;
    }

return out;
}
*/

