#include "manUI.h"
using namespace std;

void UserUI:: main_menu(){

    while(true){

    cout << "Welcome to FALL's Pizza" << endl << endl;
    char input = '\0';
    cout << "Press a for Administration" << endl;
    cout << "Press s for Sales" << endl;
    cout << "Press p for Pizzaiolos" << endl;
    cout << "Press d for Delivery" << endl;
    cout << "Press q to quit" << endl;
    cout << "Selection: ";
    cin >> input;
    validate_user_input(input);

    }
}
/*void UserUI::validate_user_input(char input){

    if(input == 'a'){

        cout << "Hello Administrator" << endl;
    }
    if(input == 's'){

        sales_options();
        pizza_service.add_pizza(create_pizza());

        Menu message;
        message.welcomeMessage();
        Menu opt;
        opt.options();
    }

    if(input == 'p'){

        Location();
    }
    if(input == 'd'){

        Location();
}
    if(input == 'q'){
        cout << endl;
    }
}


void UserUI::admin_options(){
    char input = '0';
    while (!(input == 'q')){
    cout << "Press 1 to add new pizza size: " << endl;
    cout << "Press 2 to add toppings: " << endl;
    cout << "Press 3 to add prices: " << endl;
    cout << "Press 4 to add location: " << endl;
    cout << "Press q to quit: " << endl;
    cin >> input;
    validate_admin_input(input);
    }
}
void AdminUI::validate_admin_input(char input){
    if(input == '1'){
        AdminUI admin;
        admin.the_menu();
        cout << "Choose pizza size and bread" << endl;
        int number;
        cin >> number;

        //make_order.add_pizza(create_pizza());
    }
    else {
        cout << endl;
    }
}
*/
void UserUI::validate_user_input(char input)
{
    if(input == 'a' && input == 's')
    {
        try
        {
            pizza_service.add_pizza(create_pizza());
        }
        catch(invalidPizzaName)
        {
            cout << "Invalid pizza name" << endl << endl;

        }
        catch (invalidPizzaSize)
        {
            cout << "Invalid pizza size" << endl << endl;
        }
        catch (invalidPizzaPrice)
        {
            cout << "Invalid pizza price" << endl << endl;
        }
        catch (invalidPizzaLocation)
        {
            cout << "Invalid pizza location" << endl << endl;
        }
    }
    cout << "Adding pizza" << endl;

}

Pizza UserUI::create_pizza(){

    string name, price, location;
    int size;
    cout << "What pizza would you like?" << endl;
    cin >> name;
    cout << "what size?" << endl;
    cin >> size;
    cout << "what price?" << endl;
    cin >> price;
    cout << "Where do you want to pick up your order?" << endl;
    cin >> location;
    Pizza pizza(name, size, price, location);
    return pizza;
}

void UserUI::Location(){

    char location;
    cout << "Choose a location: " << endl;
    cout << "Press 1 for Laugavegur" << endl;
    cout << "Press 2 for Nybilavegur" << endl;
    cout << "Press 3 for Grafarvogur" << endl;
    cin >> location;
}

void UserUI::sales_options(){

    cout << "Press 1 to make order: " << endl;
    cout << "Press 2 to change order: " << endl;
    char input;
    cin >> input;
    //sales_validate_user_input(input);
}


/*void UserUI::sales_validate_user_input(char input){
    if(input == '1'){
        Repositories sales_repo;
        sales_repo.the_menu();
        Pizza pizza;




        cout << "Choose a number from the menu?" << endl;
         char number;
         cin >> number;
         sales_menu_validate_input(number);

    }
    else {
        cout << endl;
    }

}
*/


