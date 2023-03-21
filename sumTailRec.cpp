#include <iostream>
using namespace std;

int sum(int n, int acc) {
  // base case
  if (n == 0) {
    return acc;
  }

  return sum(n - 1, n + acc);
}

int sum(int n) { sum(n, 0); }

int main() { 
    cout << sum(4) << "\n";
    cout << sum(6) <<"\n";
}