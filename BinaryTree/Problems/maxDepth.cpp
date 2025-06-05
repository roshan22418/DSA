/*
there are two way this thing in our mind first use LEVEL order traversal and another is height*/

#include<iostream>
using namespace std;
#include<queue>

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
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return max(leftHeight,rightHeight) + 1;
    }




    int usingLevelTraversal(TreeNode* root){
        queue<TreeNode*> q1;
        if(root == NULL){
            return 0;
        }
        q1.push(root);
        q1.push(NULL);
        int count  = 0;
        while(!q1.empty()){
            TreeNode* first = q1.front();
            q1.pop();
            // if(first == NULL && !q1.empty()){      // not do that this part due when list is empty then go else part and in else part check first->left that is the null pointer so give error because this thing access null pointer(member access within null pointer of type 'TreeNode) 
            if(first==NULL){
                count +=1;
                // q1.push(NULL);
                if(!q1.empty()){
                    q1.push(NULL);
                }

            }
            else{
                if(first->left != NULL){
                    q1.push(first->left);
                }
                if(first->right != NULL){
                    q1.push(first->right);
                }

            }
            
        }
        return count;
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        int height1 = height(root);
        return height1;


        // int finalAns = usingLevelTraversal(root);
        // return finalAns;
        // if(root == NULL){
        //     return 0;
        // }
        // int leftheight = maxDepth(root->left);
        // int rigthheight = maxDepth(root->right);
        // int height = max(leftheight,rigthheight) +1;
        // return height;
        
    }
};