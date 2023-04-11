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
  for (int i = list.size() - 1; i > 0; i--) {
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

int main() {
  int myints[] = {3, 2, 4, 1, 6, 5, 8};
  vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));

  sort(fifth);
  print(fifth);
}