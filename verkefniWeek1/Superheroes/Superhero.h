#ifndef SUPERHERO_H
#define SUPERHERO_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Superhero{
private:
    string _name;
    int _age;
    char _superpower;
public:
    Superhero();
    Superhero(string name, int age, char superpower);
    friend istream& operator >> ( istream& in, Superhero& hero);
    friend ostream& operator << ( ostream& out, const Superhero& hero);
};

#endif
