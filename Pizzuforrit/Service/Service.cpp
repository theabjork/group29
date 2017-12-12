#include "Service.h"
#include <string>
//#include <vector>

using namespace std;

Services:: Services(){
}
/*void Services::sales_menu_validate_input(char number){
    Repositories menu_repo;
    menu_repo.read_from_file();
    if(number == '1'){
        menu_repo.validate_menu_input(number);
    }
}*/
void Services::read_menu(){
    menu_repo.the_menu();
}
void Services::add_product(const Product& product){
    menu_repo.add_product(product);
}

void Services::add_pizza(const Pizza& pizza){
    if (validatePizza(pizza) && validatePizzaSize(pizza) && validatePizzaPrice(pizza) && validatePizzaLocation(pizza)) {
        pizza_repo.add_pizza(pizza);
    }
}

bool Services::validatePizza(Pizza pizza){
    string name = pizza.get_name();
    for (unsigned int i = 0; i < name.length(); i++){
        if(!isalpha(name[i])){
            throw invalidPizzaName();
        }
    }
    return true;
}

void Services::add_pizzaSize(const Pizza& pizza) {
    if (validatePizzaSize(pizza)) {
        pizza_repo.add_pizza(pizza);
       cout << pizza << endl;
    }
}
bool Services::validatePizzaSize(Pizza pizza) {

    if(pizza.get_size() != 12 || pizza.get_size() != 16 || pizza.get_size() != 32){
        throw invalidPizzaSize();
    }
    return true;
}

void Services::add_pizzaPrice(const Pizza& pizza) {
    if (validatePizzaPrice(pizza)) {
        pizza_repo.add_pizza(pizza);
    }
}

bool Services::validatePizzaPrice(Pizza pizza){
    string price = pizza.get_price();

    if(price.length() < 0)
        throw invalidPizzaPrice();

    for (unsigned int i = 0; i < price.length(); i++){
        if(!isdigit(price[i])){
            throw invalidPizzaPrice();
        }
    }
    return true;

}
void Services::add_pizzaLocation(const Pizza& pizza) {
    if (validatePizzaLocation(pizza)) {
        pizza_repo.add_pizza(pizza);
    }
}
bool Services::validatePizzaLocation(Pizza pizza){
    string location = pizza.get_location();
    //if()
    for(unsigned int i = 0; i < location.length(); i++){
        if(!isalpha(location[i])){
            throw invalidPizzaLocation();
        }
    }
    return true;
}

