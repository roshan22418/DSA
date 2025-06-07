
/*
int this problem we use how to validate the tree by using recurssion and also  
so its a simple rule root is smaller than right side and and root is greater than left side and 
also Make sure see constrain to avoid any wrong answer*/




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
    bool helperValidBST(TreeNode* root,long long int max,long long int min){
        if(root == NULL){
            return true;
        }
        bool cond1 = root->val >min;
        bool cond2 = root->val < max;
        bool leftSubTree = helperValidBST(root->left,root->val,min);
        bool rightSubTree = helperValidBST(root->right,max,root->val);
        if(cond1 && cond2 && leftSubTree && rightSubTree){
            return true;

        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        long long int min = -2147483650;
        long long int max = 2147483690;
        bool finalAns = helperValidBST(root,max,min);
        return finalAns;
        // bool leftSubTree = isValidBST(root->left);
        // bool rightSubTree = isValidBST(root->right);
        // if(leftSubTree && rightSubTree){
        //     return true;
        // }
        
        // if(root->left != NULL && root->right != NULL){
        //     if((root->right->val>root->val)&&(root->val>root->left->val)){
        //         return true;
        //     }
        //     return false;
        // }
        // if(root->left != NULL && root->right == NULL){
        //     if(root->left->val <root->val){
        //         return true;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // if(root->right != NULL && root->left == NULL){
        //     if(root->right->val > root->val){
        //         return true;

        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
    }
};