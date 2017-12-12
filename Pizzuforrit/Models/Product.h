#ifndef PRODUCT_H
#define PRODUCT_H
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Product{
private:
    string name;
    int price12;
    int price16;
    int price32;

public:

    Product(string name, int price12, int price16, int price32);
    Product();
    string get_name();
    int get_price12();
    int get_price16();
    int get_price32();
    void set_name(string newname);
    void set_price12(int price12);
    void set_price16(int price16);
    void set_price32(int price32);
    friend istream& operator >> ( istream& in, Product& product);
    friend ostream& operator << ( ostream& out, Product& product);

};

#endif
