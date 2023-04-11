#include <iostream>
#include <vector>

using namespace std;

void print(std::vector<int> a) {
  std::cout << "The vector elements are: ";

  for (int i = 0; i < a.size(); i++) std::cout << a.at(i) << ' ';

  cout << "\n";
}

vector<int> sort(vector<int> list) {
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

int main() {
  vector<int> lmaoxd = {3, 2, 4, 1, 6, 5, 8};
  vector<int> new_lmaoxd = sort(lmaoxd);
  print(new_lmaoxd);
}