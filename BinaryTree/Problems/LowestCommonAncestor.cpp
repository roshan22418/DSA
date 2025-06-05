/*
in this problem we need to do find lowest common ancestor so we need to classiy into two cases so 
first make sure condition
/ if((leftLCA == p || leftLCA == q) && rightLCA == NULL){
        //     return leftLCA;
        // }
        // else if((rightLCA == p || rightLCA == q) && leftLCA == NULL ){
        //     return rightLCA;
        // }
        // else{
        //     // if(rightLCA != NULL){
        //     //     cout<<rightLCA->val<<" ";
        //     // }
        //     // if(leftLCA != NULL){
        //     //     cout<<leftLCA->val<<" ";
        //     // }
        //     return root;
        // }
not do this thing due to if LCA not equal to p and q and after backtracking if leftLCA or rightLCA if NULL then LCA will be updat 
so not use this thing
so simply use != NULL 
*/

#include<iostream>
using namespace std;

#include<vector>




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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL){
            return NULL;
        }
        if(root == p || root == q){
            cout<<"root value "<<root->val<<endl;
            return root;
        }
        TreeNode* leftLCA = lowestCommonAncestor(root->left,p,q);
        // if(leftLCA != NULL){
        //         cout<<leftLCA->val<<" ";
        //     }
        TreeNode* rightLCA = lowestCommonAncestor(root->right,p,q);
        if(rightLCA != NULL && leftLCA != NULL){
            return root;
        }
        else if(rightLCA != NULL && leftLCA == NULL){
            return rightLCA;
        }
        else{    //else if(rightLCA == NULL && leftLCA != NULL)
            return leftLCA;
        }
        // if(rightLCA != NULL){
        //         cout<<rightLCA->val<<" ";
        //     }
        
        // if((leftLCA == p || leftLCA == q) && rightLCA == NULL){
        //     return leftLCA;
        // }
        // else if((rightLCA == p || rightLCA == q) && leftLCA == NULL ){
        //     return rightLCA;
        // }
        // else{
        //     // if(rightLCA != NULL){
        //     //     cout<<rightLCA->val<<" ";
        //     // }
        //     // if(leftLCA != NULL){
        //     //     cout<<leftLCA->val<<" ";
        //     // }
        //     return root;
        // }

        
    }
};