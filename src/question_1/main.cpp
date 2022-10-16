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
    
    cout << "Pleas enter the first DNA string: ";

    cin >> word1;

    cout << "Now enter the second DNA string: ";

    cin >> word2;

    cout << "The distance is: " << get_dna_p_distance(word1, word2) << "\n";

    cout << "This program has now ended, thank you!\n";
    
    return 0;
}