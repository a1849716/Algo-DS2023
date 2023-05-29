#include "DocumentManager.h"
#include <iostream>

using namespace std;

int main(){
  DocumentManager d1;
  d1.addDocument("lmaoxd", 120, 3);
  d1.addPatron(6969);
  d1.borrowDocument(120, 6969);
  d1.returnDocument(120, 6969);
}