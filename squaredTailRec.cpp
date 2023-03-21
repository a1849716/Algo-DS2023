#include <iostream>
using namespace std;

int squared(int x, int n, int acc){
    if (x == 0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    return(x, n-1, acc * x);
}

int squared(int x, int n){
    squared(x, n, 1);
}