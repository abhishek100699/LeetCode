#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh;
        for(auto x:stones){
            maxh.push(x);
        }
        while(maxh.size()>1){
            int first = maxh.top();
            maxh.pop();
            int second = maxh.top();
            maxh.pop();
            if(second != first){
                maxh.push(abs(first-second));
            }
        }
        if(maxh.size()==0) return 0;
        return maxh.top();
    }
};