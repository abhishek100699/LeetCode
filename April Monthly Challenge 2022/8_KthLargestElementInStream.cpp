#include<bits/stdc++.h>
using namespace std;
class KthLargest {
public:
    priority_queue<int , vector<int>,greater<int>> minh;
    int l = 0;
    KthLargest(int k, vector<int>& nums) {
        l = k;
        for(auto x:nums){
            minh.push(x);
            if(minh.size()>k){
                minh.pop();
            }
        }
        
    }
    
    int add(int val) {
        minh.push(val);
        if(minh.size()>l){
            minh.pop();
        }
        return minh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */