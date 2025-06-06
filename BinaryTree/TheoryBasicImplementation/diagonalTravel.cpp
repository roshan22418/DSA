#include<iostream>
using namespace std;
#include<vector>
#include<queue>

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
    vector<int> diagonal(Node *root) {
        vector<int> diagonalPath;
        queue<Node*> q1;
        Node* curr = root;
        while(!q1.empty() || curr->left != NULL || curr->right != NULL){
            diagonalPath.push_back(curr->data);
            if(curr->left != NULL){
                q1.push(curr->left);
            }
            if(curr->right == NULL){
                curr = q1.front();
                q1.pop();
            }
            else{
                curr = curr->right;
            }
        }
        if(curr != NULL){
            diagonalPath.push_back(curr->data);
        }
        return diagonalPath;
        
    }
};