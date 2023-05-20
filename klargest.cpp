#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int kth_largest(vector<int> values, int k){
    priority_queue<int> list;
    for (int i = 0; i < values.size(); i++){
        list.push(values.at(i));
    }
    for (int j = 0; j < k-1; j++){
        list.pop();
    }
    
    return list.top();
}

/*
int main(){
    vector<int> val = {1,2,4,5,6,3};    
    cout <<"second largest: "<< kth_largest(val, 2)<<endl;
}
*/