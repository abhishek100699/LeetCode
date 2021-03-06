#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int sum = 0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.push(a);
                s.push(a+b);
            }
            else if(ops[i] == "D"){
                int a = s.top();
                s.push(2*a);
            }
            else if(ops[i] == "C"){
                s.pop();
            }
            else{
                s.push(stoi(ops[i]));
            }
        }
        while(s.size()>0){
            sum = sum + s.top();
            s.pop();
        }
        return sum;
    }
};