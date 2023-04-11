#include <iostream>
#include <vector>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include "Sort.h"

using namespace std;

int main() {
  // make the vector
  vector<int> array;
  int input;
  while (cin >> input) {
    array.push_back(input);
  }

  int length = array.size();

  QuickSort quickSort;
  RecursiveBinarySearch rbs;

  vector<int> sortedArray = quickSort.sort(array);

  if (rbs.search(sortedArray, 1) == 1) {
    cout << "true"
         << " ";
  } else {
    cout << "false"
         << " ";
  }
  int i = 0;
  while (i < length) {
    cout << sortedArray.at(i) << " ";
    i++;
  }

  return 0;
}