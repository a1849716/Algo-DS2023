#ifndef TRIENODE_H
#define TRIENODE_H
#include <string>

class TrieNode {
 private:
  TrieNode *children[26];
  bool isEndOfWord;
  char data;
 public:
  TrieNode();
  TrieNode *createNode();
  void insertWord(TrieNode *root, std::string word);
  bool search(TrieNode *root, std::string word);
};

#endif