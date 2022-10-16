#include "question2.h"
#include <iostream>

int main()
{

    int user_option;
    string word1;
    string word2;
    int seconds_since_1970;
    int cookies;
    string again_option;
    
cout << "Please enter a the DNA string: ";

        cin >> word1;

        cout << "Now here is the RNA string: " << transcribe_dna_into_rna(word1) << "\n";

        cout << "This program has now ended, thank you!\n";

    return 0;
}