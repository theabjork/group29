//
//  New_product.cpp
//  Pizza
//
//  Created by Katrin Arnardottir on 12/12/2017.
//  Copyright © 2017 Katrin Arnardottir. All rights reserved.
//

#include "New_product.hpp"


Product::Product() {
    this->name = "";
    this->price12 = 0;
    this->price16 = 0;
    this->price32 = 0;
    
}

Product::Product(string name, int price12, int price16, int price32){
    this->name = name;
    this->price12 = price12;
    this->price16 = price16;
    this->price32 = price32;
}

string Product::get_name(){
    return this->name;
}

int Product::get_price12(){
    return this->price12;
}

int Product::get_price16(){
    return this->price16;
}

int Product::get_price32(){
    return this->price32;
}
void Product::set_name(string newname){
    name = newname;
}
void Product::set_price12(int newprice12){
    price12 = newprice12;
}
void Product::set_price16(int newprice16){
    price16 = newprice16;
}
void Product::set_price32(int newprice32){
    price32 = newprice32;
}

istream& operator >> ( istream& in, Product& product) {
    
    cout << "Enter name of product: " << endl;
    in >> product.name;
    cout << "Enter price for 12\": " << endl;
    in >> product.price12;
    cout << "Enter price for 16\": " << endl;
    in >> product.price16;
    cout << "Enter price for 32\": " << endl;
    in >> product.price32;

    return in;
}

ofstream& operator << ( ofstream& fout, const Product& product) {
    
   
    fout << product.name << "\t"<< product.price12 << "  "<< product.price16 << "  "<< product.price32 << endl;
    
    return fout;
}



