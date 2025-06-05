/* in this problem we need to learn top to bottom and first find out the node and go back 
toward root and also decrement of the kth value if kth value goes to zero, this is my final Ans
*/

#include<iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *left, *right;
};
class Solution {
  public:
  Node* getKthAncestor(Node* root,int &k,int node){
      if(root == NULL){
          return NULL;
      }
      if(root->data == node){
          return root;
      }
      Node* leftLCA = getKthAncestor(root->left,k,node);
      Node* rightLCA = getKthAncestor(root->right,k,node);
      if(leftLCA != NULL && rightLCA == NULL){
          k--;
          if(k<=0){
              k = INT_MAX;   //why do this thing  due to i don't want to k co
              // at 0 so that why goes to max value;
              return root;
          }
          return leftLCA;
      }
      if(leftLCA == NULL && rightLCA != NULL){
          k--;
          if(k<=0){
              k = INT_MAX;   //why do this thing  due to i don't want to k co
              // at 0 so that why goes to max value;
              return root;
          }
          return rightLCA;
          
      }
      return NULL;
  }
    int kthAncestor(Node *root, int k, int node) {
        if(root == NULL){
            return -1;
        }
        Node* ans = getKthAncestor(root,k,node);
        if(ans == NULL || ans->data == node){
            return -1;
        }
        else{
            return ans->data;
        }
        // Code here
        
    }
};
