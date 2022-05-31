#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int n = s.length();
        unordered_set<string> st;
        for(int i=0;i<=n-k;i++){
            st.insert(s.substr(i,k));
        }
        return st.size()==(1<<k) ;
    }
};