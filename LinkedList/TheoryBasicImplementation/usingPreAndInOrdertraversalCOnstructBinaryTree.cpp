#include<iostream>
using namespace std;
#include<queue>
#include<map>

#include<vector>


class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->left = NULL;
    }
};

int HelperIndex(vector<int> inorder,int value,int startIndex,int endIndex){
    for (int i = startIndex; i <= endIndex; i++)
    {
        if (inorder[i]==value)
        {
            return i;
        }
        
    }
    return -1;
    
}

Node* createBinaryTreeUsingTraversal(int &postion,int startingIndex,int endIndex,vector<int> preorder,vector<int> inorder){
    if(startingIndex > endIndex || postion>=preorder.size()){
        return NULL;
    }
    Node* root = new Node(preorder[postion]);
    int value = preorder[postion];
    postion++;
    int inorderIndex = HelperIndex(inorder,value,startingIndex,endIndex);
    
    root->left = createBinaryTreeUsingTraversal(postion,startingIndex,inorderIndex-1,preorder,inorder);
    root->right = createBinaryTreeUsingTraversal(postion,inorderIndex+1,endIndex,preorder,inorder);
    return root;

}


void printTree(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->val<<"//";
    printTree(root->left);
    // cout<<root->val<<"\\";
    printTree(root->right);
}




int main(){
    vector<int> preorder = {2,14,8,6,10,4};
    vector<int> inorder = {8,14,6,2,10,4};
    int position = 0;
    int start = 0;
    int end = preorder.size()-1;
    Node* root = createBinaryTreeUsingTraversal(position,start,end,preorder,inorder);
    printTree(root);


}