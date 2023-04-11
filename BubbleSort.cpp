#include "BubbleSort.h"

using namespace std;

vector<int> Sort::sort(vector<int> list) {
  // get the length of vector;
  int length = list.size();
  // interate "length" amount of times
  for (int i = length - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      // setting up a temporary number holder to be the number after
      int temp = list.at(j + 1);
      // if the curr_number is larger than the number after
      if (list.at(j) > list.at(j + 1)) {
        // replace the number after with the curr number
        list.at(j + 1) = list.at(j);
        // set the current number to the number after
        list.at(j) = temp;
      }
    }
  }
  return list;
}
