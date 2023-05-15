#include <iostream>

#include "Autocomplete.h"
#include "TrieNode.h"

using namespace std;

int main() {
  Autocomplete p1;
  TrieNode *node = p1.createNode();
  p1.insert("lmaoxd");
  p1.insert("lehello");
  cout << p1.search(node, "lmaoxd") << endl
       << p1.search(node, "lehello") << endl;
}