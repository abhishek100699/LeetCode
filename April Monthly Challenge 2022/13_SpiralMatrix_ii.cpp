#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0));
        int l = 0 , r = n-1, t=0, b = n-1;
        int dir = 1;
        int k=1;
        while(l<=r && t <= b){
            if(dir==1){
                for(int i=l;i<=r;i++){
                    arr[t][i] = k++;
                }
                dir = 2;
                t++;
            }
            if(dir==2){
                for(int i=t;i<=b;i++){
                    arr[i][r] = k++;
                }
                r--;
                dir=3;
            }
            if(dir==3){
                for(int i=r;i>=l;i--){
                    arr[b][i] = k++;
                }
                dir = 4;
                b--;
            }
            if(dir==4){
                for(int i= b;i>=t;i--){
                    arr[i][l] = k++;
                }
                l++;
                dir = 1;
            }
        }
        return arr;
    }
};