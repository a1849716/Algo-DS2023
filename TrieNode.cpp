#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct trieNode {
  struct trieNode *children[26];
  bool isEndOfWord;
};

struct trieNode *createNode() {
  struct trieNode *newNode = new trieNode;
  newNode->isEndOfWord = false;

  for (int i = 0; i < 26; i++) {
    newNode->children[i] = NULL;
  }
  return newNode;
};

void insert(trieNode *root, string key) {
  //sets initial node as root
  trieNode *traverse = root;

  //for i to the length of key word
  for (int i = 0; i < key.length(); i++) {
    int index = key[i] - 'a';
    if (!traverse -> children[index]){
      traverse->children[index] = createNode();
    }
  }
  //set last node as leaf
  traverse->isEndOfWord = true;
}
