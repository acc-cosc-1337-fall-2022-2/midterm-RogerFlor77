#include "question1.h"
#include <iostream>

using namespace std;

int main()
{
    int user_option;
    string word1;
    string word2;
    int seconds_since_1970;
    int cookies;
    string again_option;

    cout << "Please select an option from the menu below ";
    cout << "\n1 - Get DNA P Distance ";
    cout << "\n2 - Change all the T's to U's ";
    cout << "\n3 - Cookie Ingredients ";
    cout << "\n4 - Find Out the Time \n";

    cin >> user_option;

    if (user_option == 1)
    {
    
    cout << "Pleas enter the first DNA string: ";

    cin >> word1;

    cout << "Now enter the second DNA string: ";

    cin >> word2;

    cout << "The distance is: " << get_dna_p_distance(word1, word2) << "\n";

    cout << "This program has now ended, thank you!\n";
    }


    if (user_option == 2)
    {
        cout << "Please enter a the DNA string: ";

        cin >> word1;

        cout << "Now here is the RNA string: " << transcribe_dna_into_rna(word1) << "\n";

        cout << "This program has now ended, thank you!\n";
    }

    else if (user_option == 3)
    {
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

    } 

    else if (user_option == 4)
    {
        cout << "Enter the seconds since 1970: ";

        cin >> seconds_since_1970;

        cout << "The time is " 
        << get_hours(seconds_since_1970) << ":" << get_minutes(seconds_since_1970) << ":" 
        << get_seconds(seconds_since_1970) << "\n";

        cout << "This program has ended, thank you!\n";
    }
    return 0;
}