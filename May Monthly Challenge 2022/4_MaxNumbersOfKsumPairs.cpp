#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int isSumK(vector<int> &nums,int k){
        int n = nums.size();
        int l = 0, h = n-1;
        int count = 0;
        sort(nums.begin(),nums.end());
        while(l<h){
            if(nums[l]+nums[h] == k){
                l++;
                h--;
                count++;
                continue;
            }
            else if(nums[l]+nums[h]<k){
                l++;
                continue;
            }
            else{
                h--;
                continue;
            }
        }
        return count;
    }
    
    
    // Second Method
    
    int isSum(vector<int> &nums,int k){
        map<int,int> mp;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int l = k-nums[i];
            if(mp[l]>0){
                count++;
                mp[l]--;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return count;
    }
    
    
    int maxOperations(vector<int>& nums, int k) {
        return isSum(nums, k);
    }
};