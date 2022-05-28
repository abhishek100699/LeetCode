#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*
        vector<int> ans(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            ans[nums[i]] = 1;
        }
        int ans1 = -1;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                ans1 = i;
            }
        }
        return ans1;
        */
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            ans = ans^nums[i];
            ans = ans^i;
        }
        ans = ans^0;
        ans = ans^(nums.size());
        return ans;
    }
};