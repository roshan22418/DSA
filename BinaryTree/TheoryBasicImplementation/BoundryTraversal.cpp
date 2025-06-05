#include<iostream>
using namespace std;
#include<vector>

// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    void leftTraversal(Node* root,vector<int> &ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            return;
        }
        ans.push_back(root->data);
        if(root->left != NULL){
            leftTraversal(root->left,ans);
        }
        else{
            leftTraversal(root->right,ans);
        }
    }
    
    void leafTraversal(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        leafTraversal(root->left,ans);
        leafTraversal(root->right,ans);
    }
    
    void rightTraversal(Node* root,vector<int> &ans){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            return;
        }
        if(root->right != NULL){
            rightTraversal(root->right,ans);
        }
        else{
             rightTraversal(root->left,ans);
        }
       
        ans.push_back(root->data);

        
        
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int> FinalAns;
        if(root == NULL){
            return FinalAns;
        }
        
        // do this thing if not then comes wrong ans if node = 1;
        FinalAns.push_back(root->data);
        leftTraversal(root->left,FinalAns);
        leafTraversal(root->left,FinalAns);
        leafTraversal(root->right,FinalAns);
        rightTraversal(root->right,FinalAns);
        return FinalAns;
        
        
        
    }
};