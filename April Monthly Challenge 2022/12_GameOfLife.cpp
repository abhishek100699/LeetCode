#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void helper(vector<vector<int>> arr, vector<vector<int>> &board){
        int m = arr.size();
        int n = arr[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count = 0 ;
                if(arr[i][j] == 1){
                    if(j+1<n && arr[i][j+1]==1){
                        count++;
                    }
                    if(j-1>=0 && arr[i][j-1]==1){
                        count++;
                    }
                    if(i-1>=0 && arr[i-1][j] == 1){
                        count++;
                    }
                    if(i+1<m && arr[i+1][j]==1){
                        count++;
                    }
                    if((j+1<n && i-1 >=0) && arr[i-1][j+1] == 1){
                        count++;
                    }
                    if((j-1>=0 && i-1>=0) && arr[i-1][j-1] == 1){
                        count++;
                    }
                    if((i+1<m && j+1 <n) && arr[i+1][j+1]==1){
                        count++;
                    }
                    if((i+1<m && j-1>=0) && arr[i+1][j-1]==1){
                        count++;
                    }
                    if(count<2){
                        board[i][j]=0;
                    }
                    else if(count > 3){
                        board[i][j] = 0;
                    }
                    
                }
                else if(arr[i][j] == 0){
                    int count = 0;
                    if(j+1<n && arr[i][j+1]==1){
                        count++;
                    }
                    if(j-1>=0 && arr[i][j-1]==1){
                        count++;
                    }
                    if(i-1>=0 && arr[i-1][j] == 1){
                        count++;
                    }
                    if(i+1<m && arr[i+1][j]==1){
                        count++;
                    }
                    if((j+1<n && i-1 >=0) && arr[i-1][j+1] == 1){
                        count++;
                    }
                    if((j-1>=0 && i-1>=0) && arr[i-1][j-1] == 1){
                        count++;
                    }
                    if((i+1<m && j+1 <n) && arr[i+1][j+1]==1){
                        count++;
                    }
                    if((i+1<m && j-1>=0) && arr[i+1][j-1]==1){
                        count++;
                    }
                    if(count==3){
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
    
    
    void gameOfLife(vector<vector<int>>& board) {
        
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> temp(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp[i][j] = board[i][j];
            }
        }
        helper(temp,board);
        
    }
};