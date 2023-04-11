#include "RecursiveBinarySearch.h"

using namespace std;

int RecursiveBinarySearch::binarySearch(vector<int> list, int num, int start, int end){
    if ( start > end){
    return 0;
  }
  
  int middle = (start+end)/2;

  if (list.at(middle) == num){
    return middle;
  }
  else if(list.at(middle) < num){
    return binarySearch(list,1, middle+1, end);
  }
  else{
    return binarySearch(list, 1, start, middle-1);
  }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
  int index = binarySearch(list, target, 0, list.size()-1);
  bool status = false;
  if (index == 0){
    status = false;
  }
  else {
    status = true;
  }
  return status;
};
