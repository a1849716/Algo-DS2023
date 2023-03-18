#include "Reverser.h"
#include <iostream>
#include <string>
using namespace std;

Reverser::Reverser() {
remainder = 0;
reversedValue = 0;
};

int Reverser::reverseDigit(int value) {
  if (value <= 1) {
    return reversedValue;
  }
  remainder = value % 10;
  reversedValue = reversedValue * 10 + remainder;
  return reverseDigit(value / 10);
};

string Reverser::reverseString(string character) {

};
