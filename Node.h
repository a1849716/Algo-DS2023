#ifndef NODE_H
#define NODE_H

class Node {
  friend class LinkedList;

 private:
  int data;
  Node* link;

 public:
  Node();
  Node(int data, Node* next);
};

#endif