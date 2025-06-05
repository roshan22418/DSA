/*to find the diameter there are two way one is top to bottom and other is bottom to top(best approac)
top to bottom explore all subtree and find the maxdiamter so same approach like a balanced binary tree and
like explore subtree and make sure in (leftheight + rightHeigh)->diameter 
and no sub 1 due to for finding the height its goes one step forward so there is no need to subtract*/


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
        int height = max(leftHeight,rightHeight) +1;
        return height;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int diameter = (leftHeight + rightHeight);  // not subtract 1 due to its not goest to root its  its take one step forward so there is no need to subtract 1;
        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);
        int finalDiameter = max(diameter,max(leftDiameter,rightDiameter));
        return finalDiameter;
        
    }
};