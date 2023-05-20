#include <iostream>

#include "Heap.tpp"

using namespace std;

int main(){
  vector<int> heap = {1,2,3,4,5,6,7};
  Heap<int> h(heap);  
  h.print_heap();
  cout << "###" <<endl;
  h.insert(0);
  h.print_heap();
}
