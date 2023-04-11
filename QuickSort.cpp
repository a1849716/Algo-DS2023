#include "QuickSort.h"

using namespace std;

vector<int> QuickSort::sort(vector<int> list) {
  int length = list.size();
  int pivot;
  if (length < 3) {
    pivot = list.at(length - 1);
  } else {
    pivot = list.at(2);
  }

  vector<int> lessThan;
  vector<int> greaterThan;
  vector<int> sameNum;

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

  sort(lessThan);
  sort(greaterThan);

  list.clear();
  list = lessThan;

  for (int j = 0; j < sameNum.size(); j++){
    list.push_back(pivot);
  }

  for (int k = 0; k < greaterThan.size(); k++){
    list.push_back(greaterThan.at(k));
  }
  
  return list;
};