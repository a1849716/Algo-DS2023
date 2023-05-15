#include "TrieNode.h"

#include <iostream>
#include <string>
using namespace std;

TrieNode::TrieNode(){
  isEndOfWord = false;
};

TrieNode* TrieNode::createNode() {
  TrieNode *newNode = new TrieNode;
  newNode->isEndOfWord = false;

  for (int i = 0; i < 26; i++) {
    newNode->children[i] = nullptr;
  }
  return newNode;
};

void TrieNode::insertWord(TrieNode *root, string word) {
  // sets initial node as root
  TrieNode *traverse = root;

  // for i to the length of key word
  for (int i = 0; i < word.length(); i++) {
    int index = word[i] - 'a';
    //cout << "int "<< i << ": " <<word[i] << endl;
    if (!traverse->children[index]) {
      traverse->children[index] = createNode();
      traverse->children[index]->data = word[i];
      traverse = traverse->children[index];
    }
  }
  // set last node as leaf
  traverse->isEndOfWord = true;
}

bool TrieNode::search(TrieNode *root, string word) {
  TrieNode *traverse = root;

  for (int i = 0; i < word.length(); i++) {
    int index = word[i] - 'a';
    if (!traverse->children[index]){
    return false;
    }
    traverse = traverse->children[index];
  }

  return (traverse->isEndOfWord);
}
