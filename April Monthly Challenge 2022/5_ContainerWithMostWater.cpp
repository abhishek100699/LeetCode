#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1;
        int area = INT_MIN;
        if(n==0 || n==1) return 0;
        while(left<right){
            area = max(min(height[left],height[right])*(right-left),area);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return area;
    }
};