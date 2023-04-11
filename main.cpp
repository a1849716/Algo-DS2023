#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

using namespace std;

void print(std::vector<int> const &a) {
  for (int i = 0; i < a.size(); i++) std::cout << a.at(i) << ' ';
  cout << "\n";
}

int main() {
  // make the vector
  vector<int> array = {1, 2, 5, 4, -5, 100, 7777, 2014};

  QuickSort quickSort;
  RecursiveBinarySearch rbs;
  vector<int> sortedArray = quickSort.sort(array);
  cout <<rbs.search(sortedArray, 1)<<" ";
  print (sortedArray);

  return 0;
}