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
vector<int> quickSort(vector<int> list) {
  //find the length
  int length = list.size();
  //create base case
  if (length <= 1){
    return list;
  }

  //find the pivot
  int pivot;
  if (length < 3) {
    pivot = list.at(length - 1);
  } else {
    pivot = list.at(2);
  }

  //create three empty vectors
  vector<int> lessThan;
  vector<int> greaterThan;
  vector<int> sameNum;

  //for loops to seperate the variables into different vectors
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

  //recursively call quickSort for the seperate vectors
  lessThan = quickSort(lessThan);
  greaterThan = quickSort(greaterThan);

  //create a vector called final
  vector<int> final;
  //add lessThan variables to "final"
  final = lessThan;
  //add the repeating numbers
  for (int j = 0; j < sameNum.size(); j++){
    final.push_back(pivot);
  }
  //add the greaterThan
  for (int k = 0; k < greaterThan.size(); k++){
    final.push_back(greaterThan.at(k));
  }
  
  return final;
};

int main() {
  vector<int> lmaoxd = {3, 2, 1, 1, 6, 5, 8};
  print (quickSort(lmaoxd));
}