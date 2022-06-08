#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int removePalindromeSub(string s) {
        // because the string consist only two char a and b
        // if the string is palindrome then return 1 else return 2
        // because there always exist two substings one wth all a's and second with all b's
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]) return 2;
            i++;
            j--;
        }
        return 1;
        
    }
};