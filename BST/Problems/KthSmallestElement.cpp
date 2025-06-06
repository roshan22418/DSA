/*
in this part we use inorder to find the kth traversal 
*/


#include<iostream>
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
    void inOrder(TreeNode* root,int &k,TreeNode* &ans){
        if(root == NULL){
            return;
        }
        inOrder(root->left,k,ans);
        k--;
        if(k<=0){
            k = INT_MAX;
            ans = root;
        }
        inOrder(root->right,k,ans);



    }
    int kthSmallest(TreeNode* root, int k) {
        if(root == NULL){
            return 0;
        }
        TreeNode* ans = NULL;
        inOrder(root,k,ans);
        if(ans == NULL){
            return -1;
        }
        return ans->val;
        
        
    }
};





class Solution {
public:
    void preOrder(TreeNode* root,int &k,int &ans){
        if(root == NULL){
            return;
        }
        preOrder(root->left,k,ans);
        k--;

        if(k==0){
            ans = root->val;
        }
        preOrder(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int &k) {
        if(root == NULL){
            return -1;
        }
        int leftANs = kthSmallest(root->left,k);
        if(leftANs != -1){
            return leftANs;
        }
        if(k==1){
            return root->val;
        }
        k--;

        int rightAns = kthSmallest(root->right,k);
        return rightAns;


        
    }
};
