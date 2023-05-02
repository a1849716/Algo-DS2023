#include "LinkedList.h"

#include <iostream>

using namespace std;

LinkedList::LinkedList() { head = nullptr; };

LinkedList::~LinkedList() {
  while (head != nullptr) {
    deletePosition(1);
  }
};

Node* LinkedList::traverse(int index) {
  int position = 0;
  Node* curr_node = head;

  while (curr_node != nullptr && position < index) {
    curr_node = curr_node->link;
    position++;
  }
  return curr_node;
}

LinkedList::LinkedList(int* array, int len) {
  for (int i = 1; i <= len; i++) {
    insertPosition(i, array[i - 1]);
  }
};

void LinkedList::insertPosition(int pos, int newNum) {
  // if insert at start
  if (pos <= 1) {
    head = new Node(newNum, head);
  }
  // if insert in the middle
  Node* prev_node = traverse(pos - 1);
  // if insert is out of bounds
  if (prev_node == nullptr) {
    return;
  }
  Node* new_node = new Node(newNum, prev_node->link);
  prev_node->link = new_node;
};

bool LinkedList::deletePosition(int pos) {
  Node* temp = head;
  head = head->link;
  delete temp;
  return 1;
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
  Node* curr_node = head;
  int index = 1;
  while (curr_node != nullptr) {
    if (curr_node->data == target) {
      return index;
    }
    index++;
    curr_node = curr_node->link;
  }
};

void LinkedList::printList() {
  Node* curr_node = head;
  while (curr_node != nullptr) {
    cout << curr_node->data << endl;
    curr_node = curr_node->link;
  }
  cout << endl;
};
