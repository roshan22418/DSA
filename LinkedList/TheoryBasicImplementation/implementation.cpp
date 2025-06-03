#include<iostream>
using namespace std;


#include<queue>





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


Node* createTree(){
    cout<<"enter data(-1 for NULL): "<<endl;
    int data;
    cin>>data;
    if (data == -1)
    {
        return NULL;
    }
    Node* newNode = new Node(data);
    cout<<"enter left tree data :"<<newNode->data<<endl;
    newNode->left = createTree();
    cout<<"enter right tree data :"<<newNode->data<<endl;
    newNode->right = createTree();
    return newNode;   

}


void PreOrderprintTree(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    PreOrderprintTree(root->left);
    PreOrderprintTree(root->right);
    
}

void PostOrderprintTree(Node* root){
    if(root==NULL){
        return;
    }
    PostOrderprintTree(root->left);
    PostOrderprintTree(root->right);
    cout<<root->data<<endl;
    // cout<<"/";
    
    // cout<<"\\";   
    
}


void InOrderprintTree(Node* root){
    if(root==NULL){
        return;
    }
    InOrderprintTree(root->left);
    cout<<root->data<<endl;
    InOrderprintTree(root->right);
    
    // cout<<"/";
    
    // cout<<"\\";   
    
}



void levelOrdertraversalbasic(queue<Node*> q){
    if(q.empty()){
        return;
    }
    while (!q.empty())
    {
        Node* fetch = q.front();
        int data = fetch->data;
        cout<<data<<" ";
        q.pop();
        if(fetch->left != NULL){
            q.push(fetch->left);
        }
        if (fetch->right != NULL)
        {
            q.push(fetch->right);
        }     
        
        
    }   
    
}



void levelOrdertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while (q.size()>1)
    {
        Node* fetech = q.front();
        q.pop();
        if (fetech==NULL)
        {
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout<<fetech->data<<" ";
            if (fetech->left!=NULL)
            {
                q.push(fetech->left);
            }
            if (fetech->right != NULL)
            {
                q.push(fetech->right);
            }          
            

        }
        
        
    }
    
}



int main(){
    Node* root = createTree();
    cout<<"printing the preorder Traversal(root, left,right) "<<endl;
    PreOrderprintTree(root);
    cout<<"printing the in order (left root right) "<<endl;
    InOrderprintTree(root);
    cout<<"printing the postOrder (left right root node) "<<endl;
    PostOrderprintTree(root);
    cout<<"Printing level order traversal(level by level firts 0 1 2 3 and so on)"<<endl;
    // queue<Node*> q;
    // q.push(root);
    // levelOrdertraversalbasic(q);
    levelOrdertraversal(root);


    return 0;
}