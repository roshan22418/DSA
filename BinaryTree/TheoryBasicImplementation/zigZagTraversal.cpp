/* in this problem we use level order traversal approach and also we use queue size and also assign a
flag tha lToRdir that help tp me track which time LtoRdir or RtoLdir to push in vector*/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigZagPath;
        if(root == NULL){
            return zigZagPath;
        }
        vector<int> path;
        queue<TreeNode*> q1;
        q1.push(root);
        bool LtoRdir = true;
        while(!q1.empty()){
            int size = q1.size();
            vector<int> path(size);
            for(int i = 0;i<size;i++){
                TreeNode* front = q1.front();
                q1.pop();
                int index = LtoRdir ? i : size-i-1;
                path[index] = front->val;
                if(front->left != NULL){
                    q1.push(front->left);
                }
                if(front->right != NULL){
                    q1.push(front->right);
                }
            }
            LtoRdir = !LtoRdir;
            zigZagPath.push_back(path);
            path.clear();
        }
        return zigZagPath;


























        // queue<TreeNode*> q1;
        // q1.push(root);
        // q1.push(NULL);
        // bool leftToright = false;
        // while(!q1.empty()){
        //     TreeNode* front = q1.front();
        //     q1.pop();
        //     // cout<<"enter in whilelOOp"<<endl;
        //     if(front == NULL){
        //         cout<<"enter in new Line"<<endl;
        //         zigZagPath.push_back(path);
        //         path.clear();
        //         if(!q1.empty()){
        //             q1.push(NULL);
        //         }
        //         leftToright = !leftToright;
                
        //     }
        //     else{
        //         path.push_back(front->val);
        //         if(leftToright){
        //             if(front->left != NULL){
        //                 q1.push(front->left);
        //             }
        //             if(front->right != NULL){
        //                 q1.push(front->right);
        //             }
        //         }
        //         else{
        //             if(front->right != NULL){
        //                 q1.push(front->right);
        //             }
        //             if(front->left != NULL){
        //                 q1.push(front->left);
        //             }


        //         }
        //     }
        // }
        // return zigZagPath;
        
    }
};