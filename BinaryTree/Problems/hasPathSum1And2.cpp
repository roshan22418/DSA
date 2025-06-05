/*to find the pathUSm is equal to target or not so first create a helperFunction and
pass left subtre and right subtree but i do mistake is not pass the initial value of sum initially i was passes the 0 but not 
correct due to initial sum is root->val because i passed the root->left it's means in sum not sum the root value
that give the error and also make sure remeber of passs by reference and pass by value
IF PASS BY REFERENCE THEN NEED TO BE BACKTRACK THE VALUE SO EASY WAY TO DO PASS BBY VALUE;

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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



 // insert all path that have targetsum 

 class Solution {
public:
    void pathSumSolver(TreeNode* root, int targetSum,vector<vector<int>> &ans,vector<int> temp,int sum){
        if(root == NULL){
            return;
        }
        sum += root->val;
        temp.push_back(root->val);
        if(root->left == NULL && root->right == NULL && targetSum == sum){
            ans.push_back(temp);
            return;
        }
        pathSumSolver(root->left,targetSum,ans,temp,sum);
        pathSumSolver(root->right,targetSum,ans,temp,sum);

    } 
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        pathSumSolver(root,targetSum,ans,temp,sum);
        return ans;
    }
};



// FIRST WAY 1
class Solution {
public:
    bool helperPathSum(TreeNode* root,int target,int &sum){
        if(root == NULL){
            return false;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL && target == sum){
            return true;
            
        }
        bool leftAns = helperPathSum(root->left,target,sum);
        bool rightAns = helperPathSum(root->right,target,sum);
        if(leftAns || rightAns){
            return true;
            // Backtrack before returning                IF WE VALUE PASS BY REFERENCE THEN WE NEED TO DO THIS THING 
                //sum -= root->val;
        }
        else{
                    // Backtrack before returning                IF WE VALUE PASS BY REFERENCE THEN WE NEED TO DO THIS THING 
                //sum -= root->val;
            return false;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        if(root->left == NULL && root->right == NULL){
            if(targetSum == root->val){
                return true;
            }
            else{
                return false;
            }
        }

        bool leftAns = false;
        if(root->left != NULL){
            leftAns = helperPathSum(root->left,targetSum,root->val);
        }
        bool rightAns = false;
        if(root->right != NULL){
            rightAns = helperPathSum(root->right,targetSum,root->val);
        }

        if(leftAns || rightAns){
            return true;
        }
        else{
            return false;
        }
                
    }
};





//Second way 

class Solution {
public:

    bool pathSolver(TreeNode* root,int targetSum,int sum){
        if(root == NULL){
            return false;
        }
        sum += root->val;
        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                return true;
            }
            else{
                return false;
            }
        }
        bool leftAns = pathSolver(root->left,targetSum,sum);
        bool rightAns = pathSolver(root->right,targetSum,sum);
        bool finalAns = (leftAns || rightAns);
        return finalAns;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL){
            return false;
        }
        bool finalAns = pathSolver(root,targetSum,0);
        return finalAns;

        
    }
};