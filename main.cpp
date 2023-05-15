#include "TrieNode.h"
#include "Autocomplete.h"
#include <iostream>

using namespace std;

int main(){
  Autocomplete p1;
  TrieNode* node = p1.createNode();
  p1.insert("lmaoxd");
  p1.insert("hello");
  p1.insert("world");
  p1.insert("jun");
  p1.insert("khush");
  p1.insert("eddison");
  p1.insert("ananthu");
}