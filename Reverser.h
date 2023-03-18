#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser {
 public:
  Reverser();
  int remainder;
  int reversedValue;
  int reverseDigit(int value);
  std::string reverseString(std::string characters);
};

#endif