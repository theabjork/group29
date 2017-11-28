#ifndef SUPERHERO_H
#define SUPERHERO_H
#include "Superhero.h"
#include <iostream>
using namespace std;


class Superhero {

private:

string name;
int age;
char power;

public:
    Superhero();
    Superhero(string name, int age, char power);
    void get_hero();
    void set_hero();
    friend ostream& operator << (ostream& out, Superhero& superhero);
    friend istream& operator >> (istream& ins, Superhero& superhero);

};

#endif // SUPERHERO_H
