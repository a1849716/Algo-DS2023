#ifndef TRIENODE_H
#define TRIENODE_H
#include <string>


class TrieNode {
  friend class Autocomplete;
 private:
  TrieNode *children[26];
  bool isEndOfWord;
  std::string data;
 public:
  TrieNode();
  TrieNode *createNode();
  void insertWord(TrieNode *root, std::string word);
  bool search(TrieNode *root, std::string word);
};

#endif