#include "question4.h"
#include <iostream>

int main()
{
    int user_option;
    string word1;
    string word2;
    int seconds_since_1970;
    int cookies;
    string again_option;

cout << "Enter the seconds since 1970: ";

        cin >> seconds_since_1970;

        cout << "The time is " 
        << get_hours(seconds_since_1970) << ":" << get_minutes(seconds_since_1970) << ":" 
        << get_seconds(seconds_since_1970) << "\n";

        cout << "This program has ended, thank you!\n";

    return 0;
}