#include "TrieNode.h"
#include <iostream>

using namespace std;

int main(){
  TrieNode p1;
  TrieNode* node = p1.createNode();
  p1.insertWord(node, "lmaoxd");
  cout << p1.search(node, "lmaoxd")<<endl;
}