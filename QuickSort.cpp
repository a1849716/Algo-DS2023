#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
  // find the length
  int length = list.size();
  // create base case
  if (length <= 1) {
    return list;
  }

  // find the pivot
  int pivot;
  if (length < 3) {
    pivot = list.at(length-1);
  } else {
    pivot = list.at(2);
  }

  // create three empty vectors
  vector<int> lessThan;
  vector<int> greaterThan;
  vector<int> sameNum;

  // for loops to seperate the variables into different vectors
  for (int i = 0; i < length; i++) {
    int currNum = list.at(i);
    if (currNum < pivot) {
      lessThan.push_back(currNum);
    } else if (currNum > pivot) {
      greaterThan.push_back(currNum);
    } else if (currNum == pivot) {
      sameNum.push_back(currNum);
    }
  }

  // recursively call quickSort for the seperate vectors
  lessThan = sort(lessThan);
  greaterThan = sort(greaterThan);

  vector<int> final;
  // add lessThan variables to "final"
  final = lessThan;
  // add the repeating numbers
  for (int j = 0; j < sameNum.size(); j++) {
    final.push_back(sameNum.at(j));
  }
  // add the greaterThan
  for (int k = 0; k < greaterThan.size(); k++) {
    final.push_back(greaterThan.at(k));
  }

  return final;
};
