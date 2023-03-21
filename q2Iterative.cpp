#include <iostream>
using namespace std;

void q2(int n){
    for (int i = 1; i <= n; i++){
        cout << i;
    }
    for (int j = n; j > 0; j--){
        cout << j;
    }
}

int main(){
    q2(5);
}