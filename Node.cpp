#include "Node.h"

Node::Node(){
  data = 0;
  link = nullptr;
}

Node::Node(int input, Node* next) {
  data = input;
  link = next;
};