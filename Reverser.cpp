#include "Reverser.h"

#include <string>
using namespace std;

int Reverser::reverseDigit(int value) {
  // int valueLength = to_string(value).length();
  if (value > 10) {
    return value;
  }
  int remainder = value % 10;
  return reverseDigit(remainder * 10 + (value % 10));
};

string Reverser::reverseString(string character){
  
};
