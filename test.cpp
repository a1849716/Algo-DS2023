#include <iostream>
#include <vector>

using namespace std;

void print(std::vector<int> a) {
  std::cout << "The vector elements are: ";

  for (int i = 0; i < a.size(); i++) std::cout << a.at(i) << ' ';

  cout << "\n";
}

//Bubble sort
vector<int> bubbleSort(vector<int> list) {
  // interate "length" amount of times
  for (int i = 0; i < list.size()-1; i++) {
    for (int j = 0; j < list.size()-i-1; j++) {
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

//QuickSort
vector<int> quickSort(vector<int> list, int start, int end) {
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


int main() {
  vector<int> lmaoxd = {3, 2, 4, 1, 6, 5, 8};
  vector<int> new_lmaoxd = quickSort(lmaoxd);
  print (new_lmaoxd);
}