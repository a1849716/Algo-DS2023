#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include <vector>

class Autocomplete{
  private:
  // return the known words that start with partialWord
  std::vector<std::string> getSuggestions(std::string partialWord);  
  // add a word to the known words
  void insert(std::string word); 
};

#endif