#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include <vector>


using namespace std;

class Topping{
    
public:
    Topping();
    Topping(string name, int price);

    int get_price();

    void set_price(int price);
    friend ostream& operator << (ostream& out, vector<Topping>& topping_list);
    friend istream& operator >> (ostream& out, vector<Topping>& topping_list);
    int get_price() const;
    string get_name() const;
    
private:
   
    string name;
    int price;
    
    
    
};

#endif

