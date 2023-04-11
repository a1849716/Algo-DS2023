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
  int length = 0;
  while (cin >> input){
    array.push_back(input);
    length++;
  }

  QuickSort quickSort;
  RecursiveBinarySearch rbs;
  vector<int> sortedArray = quickSort.sort(array);
  if(rbs.search(sortedArray, 1) == 1){
  cout << "true" <<" ";
  }
  else{
    cout << "false" <<" ";
  }
  for (int i = 0; i < length; i++){
    cout << sortedArray.at(i)<<" ";
  }

  return 0;
}