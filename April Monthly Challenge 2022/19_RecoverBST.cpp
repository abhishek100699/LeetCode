#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};





class Solution {
public:
    
    void inorder(TreeNode*root, vector<int> &v){
        if(root==NULL) return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    
    void recover(TreeNode*root,int &a,int &b){
        if(root==NULL) return;
        recover(root->left,a,b);
        if(root->val == b){
            root->val = a;
        }
        else if(root->val ==a){
            root->val = b;
        }
        recover(root->right,a,b);
    }
    void recoverTree(TreeNode* root) {
        vector<int> v  ;
        inorder(root, v);
        vector<int> v1(v);
        sort(v1.begin(),v1.end());
        int a,b;
        for(int i =0;i<v.size();i++){
            if(v[i]!=v1[i]){
                a = v1[i];
                b = v[i];
                break;
            }
        }
        recover(root,a,b);
        
    }
};