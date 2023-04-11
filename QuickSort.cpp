#include "QuickSort.h"

using namespace std;

void QuickSort::quickSort(vector<int> &list, int start, int end) {
  int pivot_index = 0;
  int pivot_value;
  int length = list.size() - 1;
  if (list.size() < 3) {
    pivot_value = list.at(list.size() - 1);
  } else {
    pivot_value = list.at(2);
  }

  swap(pivot_value, list.at(length));

  int i = 0;
  int j = length;
  while (i < j){
    for (int j = length; j <= i+1; j--) {
      if (list.at(i) > pivot_value && list.at(j) <= pivot_value) {
        swap(list.at(i), list.at(j));
      }
      if (j > i) {
        pivot_index = j;
      }
    }
    i++;
  }
  swap(list.at(pivot_index), list.at(length));

  vector<int> lessThan;
  vector<int> moreThan;

  

}

vector<int> QuickSort::sort(vector<int> list) {
  quickSort(list, 0, list.size() - 1);
  return list;
};