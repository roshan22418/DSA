
/*this problem think like at root have a mirror and we observe like left element and right element of opposite side of the 
root have to same so then this problem like a two tree or identical or not only left and right condition change
*/



#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};


bool isSameTree(Node* p,Node* q){
    if(p == NULL && q == NULL){
        return true;
    }
    if(p != NULL && q != NULL){
        if (p->data == q->data && isSameTree(p->left ,q->right) && isSameTree(p->right,q->left))     
        {
            return true;
        }
        

    }
    return false;
}


bool isMirror(Node* root){
    if(root == NULL){
        return true;
    }
    bool ANs = isSameTree(root->left,root->right);
    return ANs;
}