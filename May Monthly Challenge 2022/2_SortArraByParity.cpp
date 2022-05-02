#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]%2==0){
                low++;
                mid++;
            }
            else if(nums[mid]%2!=0){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        vector<int> v;
        for(auto x:nums){
            v.push_back(x);
        }
        return v;
    }
};