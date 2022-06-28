#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> prefixsum;
        int sum = 0;
        for(int i=0;i<cardPoints.size();i++){
            sum += cardPoints[i];
            prefixsum.push_back(sum);
        }
        if(k==cardPoints.size()) return sum;
        int ans = 0;
        int score = 0;
        for(int i=0;i<=k;i++){
            int j = i+ cardPoints.size()-k-1;
            if(i==0) ans = prefixsum[j];
            else  ans = prefixsum[j]-prefixsum[i-1];  // Subarray sum to which we want to remove
            score = max(sum - ans , score);
            
        }
        return score;
    }
};