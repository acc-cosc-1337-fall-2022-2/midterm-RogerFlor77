#include "question3.h"
#include <iostream>

int main()
{
    int user_option;
    string word1;
    string word2;
    int seconds_since_1970;
    int cookies;
    string again_option;
    
do {

        cout << "Please enter the amount of cookies you would like to make: ";

        cin >> cookies;

        vector <double> ingredients = get_cookie_ingredients(cookies);

        cout << "\n Here is the sugar you need: " << ingredients[0] << "\n";
        cout << "\n Here is the butter you need: " << ingredients[1] << "\n";
        cout << "\n Here is the flour you need: " << ingredients[2] << "\n";

        cout << "\nWould you like to run the program again? Type Y for yes or N for no: ";

        cin >> again_option;

        if (again_option == "N" || again_option == "n")
        {
        cout << "This program has ended, thank you!\n";
        }

        } while (again_option == "Y" || again_option == "y"); 

    return 0;
}