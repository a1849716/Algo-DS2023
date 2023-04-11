#include "BubbleSort.h"

#include <iostream>
#include <vector>

using namespace std;

vector<int> BubbleSort::sort(vector<int> list) {
  // get the length of vector;
  int length = list.size();
  // interate "length" amount of times
  for (int i = length - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      // setting up a temporary number holder to be the number after
      int temp = list[j + 1];
      // if the curr_number is larger than the number after
      if (list[j] > list[j + 1]) {
        // replace the number after with the curr number
        list[j + 1] = list[j];
        // set the current number to the number after
        list[j] = temp;
      }
    }
  }
}
