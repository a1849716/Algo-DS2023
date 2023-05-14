#include "LinkedList.h"

#include <iostream>
#include <limits>

#include "Node.h"

using namespace std;

LinkedList::LinkedList() { head = nullptr; };

LinkedList::~LinkedList() {
  Node* current = head;
  while (current != nullptr) {
    Node* temp = current;
    current = current->link;
    delete temp;
  }
  head = nullptr;
};

Node* LinkedList::traverse(int index) {
  int position = 1;
  Node* currNode = head;
  while (currNode != nullptr && position < index) {
    currNode = currNode->link;
    position++;
  }
  if (position == index) {
    return currNode;
  } else {
    return nullptr;
  }
}

LinkedList::LinkedList(int* array, int len) {
  head = nullptr;
  for (int i = 0; i < len; i++) {
    insertPosition(i + 1, array[i]);
  }
};

void LinkedList::insertPosition(int pos, int newNum) {
  Node* new_node = new Node(newNum, nullptr);

  if (head == nullptr) {  // if list is empty
    head = new_node;
  } else if (pos <= 1) {  // if insert at start
    new_node->link = head;
    head = new_node;
  } else {
    // if insert in the middle or end
    Node* prev_node = head;
    int current_pos = 1;
    while (prev_node->link != nullptr && current_pos < pos - 1) {
      prev_node = prev_node->link;
      current_pos++;
    }
    new_node->link = prev_node->link;
    prev_node->link = new_node;
  }
};
bool LinkedList::deletePosition(int pos) {
  Node* pos_node = traverse(pos);
  if (pos_node == nullptr || pos < 1) {
    return false;
  } else if (pos == 1) {
    Node* temp = head;
    head = head->link;
    delete temp;
  } else {
    Node* prev_node = traverse(pos - 1);
    Node* after_node = traverse(pos + 1);
    if (pos_node->link == nullptr) {
      return false;
    } else {
      prev_node->link = after_node;
      delete pos_node;
    }
  }
  return true;
};

int LinkedList::get(int pos) {
  Node* pos_node = traverse(pos);
  if (pos_node == nullptr) {
    return numeric_limits<int>::max();
  };
  int position = 1;
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
  return -1;
};

void LinkedList::printList() {
  Node* curr_node = head;
  cout << '[';
  while (curr_node != nullptr) {
    cout << curr_node->data;
    curr_node = curr_node->link;
    if (curr_node != nullptr) {
      cout << " ";
    }
  }
  cout << ']' << endl;
};