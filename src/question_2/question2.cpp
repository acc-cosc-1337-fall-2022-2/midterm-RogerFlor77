#include "question2.h"

bool test_config()
{
    return true;
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