#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletions(string s) {
        map<int,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        vector<int> v;
        for(auto x: mp){
            v.push_back(x.second);
        }
        int count = 0;
        unordered_map<int,int > visited;
        for(int i=0;i<v.size();i++){
            while(visited[v[i]]){
                v[i]--;
                count++;
            }
            if(v[i]!=0)visited[v[i]]++;
        }
        return count;
        
    }
};