#include "Autocomplete.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Autocomplete::insert(string word) { insertWord(root, word); };

vector<string> Autocomplete::getSuggestions(string partialWord) {
  vector<string> curr_words;
  TrieNode* temp = root;
  for (int i = 0; i < partialWord.length(); i++) {
    if (temp->children[partialWord[i] - 'a'] == nullptr) {
      return curr_words;
    }
    temp = temp->children[partialWord[i] - 'a'];
  }
  helperFunc(partialWord, curr_words, temp);
  return curr_words;
};

void Autocomplete::helperFunc(string partialWord, vector<string> curr_words, TrieNode* temp) {
  if (temp->isEndOfWord == true) {
    curr_words.push_back(partialWord);
  }

  if (temp == nullptr) {
    return;
  };

  for (int i = 0; i < 26; i++) {
    if (temp->children[i] != nullptr) {
      string letter = temp->data;
      curr_words.push_back(letter);
      helperFunc(partialWord, curr_words, temp);
    }
  }
}