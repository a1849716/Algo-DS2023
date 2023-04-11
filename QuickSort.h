#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <vector>

class QuickSort:public Sort{
  private:
    void quickSort(vector<int> &list, int start, int end){};
  public:
    std::vector<int> sort(std::vector<int> list);
};

#endif