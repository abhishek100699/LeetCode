#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {        
        unordered_set<string> s1(words.begin(),words.end());
        unordered_set<string> s2(words.begin(),words.end());
        
        for(auto x: s1){
            for(int i=1;i<x.length();i++){
                s2.erase(x.substr(i));
            }
        }
        int ans = 0;
        for(auto x:s2){
            ans = ans + x.size() + 1;
        }
        return ans;
    }
};