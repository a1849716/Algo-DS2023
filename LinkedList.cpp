#include "LinkedList.h"

LinkedList::LinkedList() { head = nullptr; };

LinkedList::LinkedList(int* array, int len) { 
  head = &array;
};



void LinkedList::insertPosition(int pos, int newNum) {
  //if insert at start
  if (pos == 0) {
    head = new Node(newNum, head);
  }
  //insert at pos
  Node *prev_node = get(index-1);
  Node *new_node = new Node(newNum, prev_node->next);
  prev_node->next = new_node;
};

bool LinkedList::deletePosition(int pos){

};
