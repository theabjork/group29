#ifndef SALESERVICE_H
#define SALESERVICE_H
#include "../Models/Pizza.h"
#include "../Repository/Repositories.h"
#include <iostream>
#include "../Exceptions.h"
#include "Product.h"
using namespace std;

class Services{
    private:
        bool validatePizza(Pizza pizza);
        bool validatePizzaSize(Pizza pizza);
        bool validatePizzaPrice(Pizza pizza);
        bool validatePizzaLocation(Pizza pizza);

    public:
        Services();
        void read_menu();
        void add_pizza(const Pizza& pizza);
        void add_pizzaSize(const Pizza& pizza);
        void add_pizzaPrice(const Pizza& pizza);
        void add_pizzaLocation(const Pizza& pizza);
        void sales_menu_validate_input(char number);
        void add_product(const Product& product);
        Pizza pizza;
        Repositories pizza_repo;
        Repositories menu_repo;

};

#endif
