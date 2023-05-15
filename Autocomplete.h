#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <string>
#include <vector>
#include "TrieNode.h"

class Autocomplete : public TrieNode {
 private:
  TrieNode *root;
 public:
  Autocomplete();
  // return the known words that start with partialWord
  std::vector<std::string> getSuggestions(std::string partialWord);
  // add a word to the known words
  void insert(std::string word);
  void helperFunc(std::string &partialWord, std::vector<std::string> &curr_words, TrieNode* temp);
};

#endif