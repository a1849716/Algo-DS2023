#include "TrieNode.h"

#include <string>
using namespace std;

struct TrieNode {
  struct TrieNode *children[26];
  bool isEndOfWord;
};

TrieNode* TrieNode::createNode() {
  struct TrieNode *newNode = new TrieNode;
  newNode->isEndOfWord = false;

  for (int i = 0; i < 26; i++) {
    newNode->children[i] = NULL;
  }
  return newNode;
};

void TrieNode::insert(TrieNode *root, string word) {
  // sets initial node as root
  TrieNode *traverse = root;

  // for i to the length of key word
  for (int i = 0; i < word.length(); i++) {
    int index = word[i] - 'a';
    if (!traverse->children[index]) {
      traverse->children[index] = createNode();
    }
  }
  // set last node as leaf
  traverse->isEndOfWord = true;
}

bool TrieNode::search(TrieNode *root, string word) {
  TrieNode *traverse = root;

  for (int i = 0; i < word.length(); i++) {
    int index = word[i] - 'a';
    if (!traverse->children[index]) return false;

    traverse = traverse->children[index];
  }

  return (traverse->isEndOfWord);
}
