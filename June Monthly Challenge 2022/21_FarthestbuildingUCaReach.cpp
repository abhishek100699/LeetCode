#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> maxh;
        int i=0;
        int hsum = 0;
        while(i<heights.size()-1){
            
            if(heights[i+1] > heights[i]){
                hsum += heights[i+1]-heights[i];
                maxh.push(heights[i+1]-heights[i]);
                while(hsum > bricks && ladders>0){
                    hsum = hsum - maxh.top();
                    maxh.pop();
                    ladders--;
                }
                if(hsum > bricks && ladders==0){
                    break;
                }
            }
            i++;
        }
        return i;
    }
};