#include "Autocomplete.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

void Autocomplete::insert(string word){
  insertWord(root, word);
};

vector<string> Autocomplete::getSuggestions(string partialWord){
  vector<string> curr_words;
};
