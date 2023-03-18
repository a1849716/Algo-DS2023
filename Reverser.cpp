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
  else if (value >= 0){
    return -1;
  }
  remainder = value % 10;
  reversedValue = reversedValue * 10 + remainder;
  return reverseDigit(value / 10);
};

string Reverser::reverseString(string character) {
  if (character.length() < 1) {
      return character;
  }
  char first_letter = character.at(0);
  character.erase(0,1);
  return reverseString(character).append(first_letter);
};
