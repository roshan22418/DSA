

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
        if (p->data == q->data && isSameTree(p->left ,q->left) && isSameTree(p->right,q->right))     
        {
            return true;
        }
        

    }
    return false;
}