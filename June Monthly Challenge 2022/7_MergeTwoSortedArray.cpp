#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.size()==0){
            sort(nums1.begin(),nums1.end());
        } 
        int j=0;
        for(int i=m;i<n+m;i++){
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
        
    }
};