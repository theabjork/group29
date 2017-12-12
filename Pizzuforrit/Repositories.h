#ifndef REPOSITORIES_H
#define REPOSITORIES_H
#include "Pizza.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;
class Pizza;
class Repositories{

private:
    vector<Pizza> the_menu_vector;
    vector<Pizza> allPizzas;

public:
    void add_pizza(const Pizza& pizza);
    void the_menu();
    void read_from_file();
    void validate_menu_input(char number);
    vector<string> parseString(string line);
};
#endif
