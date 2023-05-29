#include <iostream>

#include "DocumentManager.h"

using namespace std;

int main() {
  DocumentManager d1;
  d1.addDocument("lmaoxd", 1, 3);
  d1.addDocument("hey", 2, 5);
  d1.addDocument("nope", 3, 1);
  d1.printDocument(1);
  d1.printDocument(2);
  d1.printDocument(3);
  d1.addPatron(1);
  cout << "search for lmaoxd: " << d1.search("lmaoxd") << endl;
  cout << "search for nope: " << d1.search("nope") << endl;
  cout << "borrow lmaoxd: " << d1.borrowDocument(1, 1) << endl;
  cout << "borrow hey: " << d1.borrowDocument(2, 1) << endl;
  d1.returnDocument(1, 1);
  cout << "borrow nope: " << d1.borrowDocument(3, 1) << endl;
  cout << "borrow nope: " << d1.borrowDocument(3, 1) << endl;
  cout << "returned hey: ";
  d1.returnDocument(2, 1);
  cout << "returned nope: ";
  d1.returnDocument(3, 1);
  cout << "returned hey: ";
  d1.returnDocument(2, 1);
}