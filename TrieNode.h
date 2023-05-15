#ifndef TRIENODE_H
#define TRIENODE_H
#include <string>

struct TrieNode {
  TrieNode* createNode();
  void insert(TrieNode *root, std::string word);
  bool search(TrieNode *root, std::string word);
};

#endif