#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans ;
        if(digits.size()==0) return ans;
        ans.push_back("");
        vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        for(auto x: digits){
            vector<string> temp;
            for(auto y:mp[x-'0']){
                for(auto z:ans){
                    temp.push_back(z+y);
                }
            }
            ans = temp;
        }
        return ans;
        
    }
};