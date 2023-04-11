#include "RecursiveBinarySearch.h"

using namespace std;

int RecursiveBinarySearch::binarySearch(vector<int> list, int num, int start, int end){
    if ( start > end){
    return false;
  }

  int middle = (start+end)/2;

  if (list.at(middle) == num){
    return true;
  }
  
  else if(list.at(middle) < num){
    return binarySearch(list,num, middle+1, end);
  }
  else{
    return binarySearch(list, num, start, middle-1);
  }
}

bool RecursiveBinarySearch::search(std::vector<int> list, int num){
  return binarySearch(list, num, 0, list.size()-1);
};
