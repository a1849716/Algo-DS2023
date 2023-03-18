#include "Reverser.h"

#include <iostream>
#include <string>
using namespace std;

Reverser::Reverser() {
  reversedValue = 0;
  remainder = 0;
};

int Reverser::reverseDigit(int value) {
  remainder = value % 10;
  reversedValue = reversedValue * 10 + remainder;
  if (value < 10) {
    return value;
  } else {
    return reverseDigit(value / 10);
  }
};

string Reverser::reverseString(string character) { return character; };
