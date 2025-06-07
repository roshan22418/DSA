

#include<iostream>
using namespace std;
#include<vector>


// Structure of node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
  pair<int,bool> isValidHeap(Node* root){
      pair<int,int> p;
      if(root == NULL){
          p.first = INT_MIN;
          p.second = true;
          return p;
      }
      if(root->left == NULL && root->right == NULL){
          p.first = root->data;
          p.second = true;
          return p;
      }
      pair<int,bool> leftSubTree = isValidHeap(root->left);
      pair<int,bool> rightSubTree = isValidHeap(root->right);
      if((leftSubTree.second && rightSubTree.second)&&(root->data>leftSubTree.first)&& (root->data>rightSubTree.first)){
          p.first = root->data;
          p.second = true;
          return p;
      }
      else{
            p.first = INT_MAX;
            p.second = false;
            return p;
          
      }
  }
  
//   int totalNode(Node* root) {
//     if (root == NULL)
//         return 0;
//     return 1 + totalNode(root->left) + totalNode(root->right);
// }
  
//   void  totalNode(Node* root,int &totalNode){
//       if(root == NULL){
//           return
//       }
//       totalNode +=1;
//       totalNode(root->left,totalNode);
//       totalNode(root->right,totalNode);
//   }
  
  
//   bool isCBT(Node* root,int TotalNode,int index){
      
      
      
//   }
    bool isHeap(Node* tree) {
        // int NoNode = 0;
        // int tNode = totalNode(root,NoNode);
        
        pair<int,bool> isValid  = isValidHeap(tree);
        return isValid.second;
        
    }
};






//another way to solve by without using pair

// bool isValidBST(Node* root,int leftValue,int rightValue){
//     if(root == NULL || (root->left == NULL && root->right == NULL)){
//         return true;
//     }
//     isValidBST(root->left,root->data,rightValue);
//     isValidBST(root->right,leftValue,root->data);

// }