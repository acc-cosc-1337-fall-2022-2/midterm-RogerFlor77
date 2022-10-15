#include "question1.h"

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string word1, const string word2)
{
    double counter = 0;
    double p_distance;
    int i;
    double final_value;

    for (int i = 0; i < word1.length(); i++)

    if (word1[i] != word2[i])
    {
        counter++;
    }

    p_distance = counter / word1.length();

    //value = round( value * 1000.0 ) / 1000.0

    final_value = round(p_distance * 10000.0) / 10000.0;

    //std::cout << std::setprecision(4) << p_distance;

    return final_value;
}

string transcribe_dna_into_rna(string word1)
{
  for (int i = 0; i < word1.length(); i++)
  {
    if (word1[i] == 'T')
    {
      word1[i] = 'U';
    }
    else if (word1[i] == 't')
    {
      word1[i] = 'u';
    }
  }
  return word1;
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

int get_seconds(int seconds_since_1970)
{
  double seconds;

  seconds = seconds_since_1970 % 60;

  return seconds;
}

int get_minutes(int seconds_since_1970)
{
  int minutes_since_1970;
  double minutes_now;

  minutes_since_1970 = seconds_since_1970 / 60;

  minutes_now = minutes_since_1970 % 60;

  return minutes_now;
}

int get_hours(int seconds_since_1970)
{
  int minutes_since_1970;
  int hours_since_1979;
  double hours_now;

  minutes_since_1970 = seconds_since_1970 / 60;

  hours_since_1979 = minutes_since_1970 / 60;

  hours_now = hours_since_1979 % 24;

  return hours_now;
}