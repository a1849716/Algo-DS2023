#include "LinkedList.h"

LinkedList::LinkedList() { head = nullptr; };

LinkedList::LinkedList(int* array, int len) {
  for (int i = 1; i <= len; i++) {
    insertPosition(i, array[i - 1]);
  }
};

LinkedList::~LinkedList() {
  while (head != nullptr) {
    deletePosition(1);
  }
};

void LinkedList::insertPosition(int pos, int newNum) {
  // if insert at start
  if (pos <= 1) {
    head = new Node(newNum, head);
  }
  // insert at pos
  Node* prev_node = get(pos - 1);
  Node* new_node = new Node(prev_node->next, newNUm);
  prev_node->next = new_node;
};

bool LinkedList::deletePosition(int pos) {
  Node* temp = head;
  head = head->link;
  delete temp;
};

int LinkedList::get(int pos) {
  unsigned int position = 0;
  Node* currNode = head;
  while (currNode != nullptr && position < pos) {
    currNode = currNode->link;
    position++;
  }
  return currNode->data;
};

int LinkedList::search(int target) {
  while (curr_node != nullptr) {
    Node* curr_node = get(pos);
    if (curr_node->data == target) {
      return curr_node;
    }
  }
};

void LinkedList::printList() {
  Node* currNode = head;
  while (currNode != nullptr) {
    std::cout << currNode->data << std::endl;
    currNode = currNode->link;
  }
  std::cout << std::endl;
};
