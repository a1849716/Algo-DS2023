#include "Reverser.h"

#include <string>
using namespace std;

int Reverser::reverseDigit(int value) {
  //int valueLength = to_string(value).length();
  int remainder = value%10;
  return reverseDigit(remainder * 10 + (value%10));
};

string Reverser::reverseString(string character){

};
