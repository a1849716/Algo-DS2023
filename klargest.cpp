#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int kth_largest(vector<int> values, int k){
    priority_queue<int> list;
    for (int i = 0; i < values.size(); i++){
        list.push(values.at(i));
    }
    for (int j = 0; j < k; j++){
        list.pop();
    }
    
    return list.top();
}
