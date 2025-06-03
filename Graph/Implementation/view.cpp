#include<iostream>
using namespace std;
#include<queue>

#include<vector>

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data  = data;
            this->left = NULL;
            this->right = NULL;
        }
    
};

Node* constructTree(){
    int data;
    cin>>data;
    if (data==-1)
    {
        return NULL;
    }

    Node* root = new Node(data);
    cout<<"enter data for left of the data is "<<root->data<<" ";
    root->left = constructTree();
    cout<<"enter data for right of the data is "<<root->data<<" ";
    root->right = constructTree();
}


void PreTraversal(Node* root){
    if (root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreTraversal(root->left);
    PreTraversal(root->right);    
}



void levelOrderTraversal(Node* root){
    queue<Node*> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        Node* front = q1.front();
        q1.pop();
        int value = front->data;
        if (front == NULL)
        {
            cout<<endl;     //new line
            if (!q1.empty())
            {
                q1.push(NULL);
            }
                        
        }
        else{
            cout<<front->data<<" ";
            if (front->left != NULL)
            {
                q1.push(front->left);
            }
            if (front->right != NULL)   
            {
                q1.push(front->right);
            }           
            
        }
        
        
    }
    
}


void leftView(Node* root,int level,vector<int>& leftView1){
    if (root == NULL)
    {
        return;
    }
    if (leftView1.size() == level)
    {
        leftView1.push_back(root->data);
    }
    if (root->left != NULL)
    {
        leftView(root->left,level+1,leftView1);        
    }
    if (root->right != NULL)
    {
        leftView(root->right,level+1,leftView1);          
    }   
}



int main(){
    Node* root = constructTree();
    PreTraversal(root);
    vector<int> leftView1;
    leftView(root,0,leftView1);
    for (int i = 0; i < leftView1.size(); i++)
    {
        cout<<leftView1[i]<<" ";
    }
    
    return 0;
}