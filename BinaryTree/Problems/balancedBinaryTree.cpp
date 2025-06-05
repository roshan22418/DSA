/*
BalanceBinaryTree = height differnce at max 1 for all subtree
Approach : using recursion 
            First split into subproblem like leftsubree and rightsubtree and find the height of the right and left and 
            and then find their difference if differance greater than 1 then ansDifference false else
            true and also find the check leftsubtree and rightSubTree is balanced or not
            
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
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int totalHeight = max(leftHeight,rightHeight) + 1;
        return totalHeight;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int rightHeight = height(root->left);
        int leftHeight = height(root->right);
        int ansDiff = abs(rightHeight-leftHeight);
        bool DiffAns = (ansDiff<=1);
        bool leftSubTree = isBalanced(root->left);
        bool rightSubTree = isBalanced(root->right);
        if(DiffAns && leftSubTree && rightSubTree ){
            return true;
        }
        else{
            return false;
        }

    }
};