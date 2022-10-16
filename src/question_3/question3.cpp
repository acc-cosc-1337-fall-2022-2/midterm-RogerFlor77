#include "question3.h"

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    vector<double> ingredients;
    double expected_sugar;
    double expected_butter;
    double expected_flour;
    double final_sugar;
    double final_butter;
    double final_flour;
    int number_to_multiply_with;

    number_to_multiply_with = cookies / 48;
    cout << "Here is the number to multiple with" << number_to_multiply_with;

    expected_sugar = 1.5 / 48;

    expected_butter = 1.0 / 48;

    expected_flour = 2.75 / 48;

    final_sugar = expected_sugar * cookies;

    final_butter = expected_butter * cookies;

    final_flour = expected_flour * cookies;

    ingredients.push_back(final_sugar);
    
    ingredients.push_back(final_butter);

    ingredients.push_back(final_flour);

    return ingredients;
}