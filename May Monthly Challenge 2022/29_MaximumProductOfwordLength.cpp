#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res = 0;
        vector<int> bits; 
        for (int i = 0; i < words.size(); i++)
        {
            int mask = 0;
            for (int j = 0; j < words[i].length(); j++){
                mask |= 1 << (words[i][j] - 'a');
            }
            bits.push_back(mask);
        }
        for (int i = 0; i < bits.size(); i++)
        {
            for (int j = i+1; j < bits.size(); j++)
            {
                if (!(bits[i] & bits[j]))
                {
                    int prod = words[i].length()*words[j].length();
                    res = (res < prod) ? prod : res;
                }
            }
        }
        return res;
    }
};