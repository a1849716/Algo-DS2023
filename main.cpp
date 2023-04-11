#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "Sort.h"
using namespace std;

void print(std::vector<int> const &a) {
  std::cout << "The vector elements are: ";

  for (int i = 0; i < a.size(); i++) std::cout << a.at(i) << ' ';

  cout << "\n";
}

int main() {
  // make the vector
  int myints[] = {0,3,5,4,-5,100,7777,2014};
  vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

  BubbleSort bubble;
  bubble.sort(fifth);
  print(fifth);

  return 0;
}