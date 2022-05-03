#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        int maxi = 0, mini=nums.size()-1;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[maxi]){
                maxi = i;
            }
            else if(nums[maxi]>nums[i]){
                l = i;
            }
            if(nums[n-i-1]<nums[mini]){
                mini = n-i-1;
            }
            else if(nums[mini]<nums[n-i-1]){
                r = n-i-1;
            }
        }
        if(r>=l) return 0;
        return l-r+1;
    }
};