





/*
in this part we use inorder to find the two sum and store in vector of the inorder and we know already 
inorder are sorted so first we do find targetValue or not by using two pointer
*/


#include<iostream>
#include<vector>
using namespace std;


class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val = val;
            this->left = left;
            this->right = right;
        }
};

class Solution {
public:
    void inOrder(TreeNode* root,vector<int> &ans){
        if(root == NULL){
            return;
        }
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        if(root->left == NULL && root->right == NULL){
            return false;
        }
        vector<int> ans;
        inOrder(root,ans);
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        int low = 0;
        int high = ans.size() -1;
        while(low<high){
            int value = ans[low] + ans[high];
            if(value == k){
                return true;
            }
            else if(k>value){
                low++;                
            }
            else{
                high--;
            }
        }
        return false;

        
    }
};