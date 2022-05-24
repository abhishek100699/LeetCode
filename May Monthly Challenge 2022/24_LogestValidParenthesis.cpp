#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        
        // by using stack
        /*
        stack<int> st;
        st.push(-1);
        int maxlen = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.size()==0){
                    st.push(i);
                }
                else{
                    maxlen = max(maxlen,i-st.top());
                }
            }
        }
        return maxlen;
        */
        
        // without extra space
        int C = 0, O = 0;
        int longest = 0;
        for(int i=0;i<s.length();i++){

            if(s[i]=='('){
                O++;
            }
            else if(s[i]==')'){
                C++;
            }
            if(C==O){
                longest = max(longest, C*2);
            }
            else if(C>O){
                C=0;
                O=0;
            }
        }
        C=0;
        O=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==')'){
                C++;
            }
            else if(s[i]=='('){
                O++;
            }
            if(C==O){
                longest = max(longest,C*2);
            }
            else if(O>C){
                C=0;
                O=0;
            }
        }
        return longest;
        
        
    }
};