#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // declaring i so as to store position where the condition is true;
        int i =0, n = nums.size()-1;
        for(i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                break;
            }
        }
        // This case comes when the array is sorted in reverse order in that cause we directly sort it in 
        // increasing order.
        if(i <=0){
            sort(nums.begin(), nums.end());
            return;
        }
        // Do the opertion move from right to left and find any number greater that nums[i] and then 
        // swap it and sort from that position.
        for(int j = n;j>=0;j--){
            if(nums[j]>nums[i-1]){
                swap(nums[j], nums[i-1]);
                sort(nums.begin()+i, nums.end());
                break;
            }
        }
    }
};