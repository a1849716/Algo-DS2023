#include <iostream>

#include "DocumentManager.h"

using namespace std;

int main() {
  DocumentManager d1;
  d1.addDocument("lmaoxd", 120, 3);
  d1.addPatron(6969);
  cout << "borrow 120: " << d1.borrowDocument(120, 6969)
       << "\nborrow 120: " << d1.borrowDocument(120, 6969)
       << "\nborrow again: " << d1.borrowDocument(120, 6969)
       << "\nand again: " << d1.borrowDocument(120, 6969)
       << "\nand again: " << d1.borrowDocument(120, 6969) << endl;
  d1.returnDocument(120, 6969);
  d1.returnDocument(120, 6969);
  d1.returnDocument(120, 6969);
}