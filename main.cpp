#include <iostream>

#include "Heap.tpp"

using namespace std;

int main(){
  vector<int> heap = {2, 4, 6, 1, 3, 5, 7};
  Heap<int> h(heap);  
  h.print_heap();
  cout << "###" <<endl;
  h.insert(0);
  h.print_heap();
  cout << "###" <<endl;
  h.remove(0);
  h.print_heap();
  cout << "min: "<<h.getMin()<<endl;
}
