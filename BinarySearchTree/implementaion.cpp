#include <iostream>
using namespace std;

#include <queue>
#include <vector>

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createBinarySearchTreeSolver(int data, Node *root)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data >= data)
    {
        root->left = createBinarySearchTreeSolver(data, root->left);
    }
    else
    {
        root->right = createBinarySearchTreeSolver(data, root->right);
    }
    return root;
}

Node *createBinarySearchTree()
{
    int data;
    cin >> data;
    Node *root = NULL;

    while (data != -1)
    {

        root = createBinarySearchTreeSolver(data, root);
        cin >> data;
    }
    return root;
}

void printBinarySearchtree(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printBinarySearchtree(root->left);
    cout << root->data << " ";
    printBinarySearchtree(root->right);
}

Node *maxElement(Node *root)
{
    if (root==NULL){
        return NULL;
    }
    Node* temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *MinElement(Node *root)
{
    if (root==NULL){
        return NULL;
    }
    Node* temp = root;
    
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *deleteNode(Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == data)
    {

        // here are total 4 cases
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        else if (root->left == NULL && root->right != NULL)
        {
            Node *subtree = root->right;
            delete root;
            return subtree;
        }
        else if (root->left != NULL && root->right == NULL)
        {
            Node *subtreeleft = root->left;
            delete root;
            return subtreeleft;
        }
        else
        {
            // in this case have both left and right are not null

            Node *maxValue = maxElement(root->left);
            int value = maxValue->data;
            root->data = maxValue->data;
            root->left = deleteNode(root->left, value);
            return root;
        }
    }
    else if(root->data > data)
    {

        //check the data go left side
        root->left = deleteNode(root->left,data);
    }
    else
    {
        root->right = deleteNode(root->right,data);

    }
    return root;
       
}

int main()
{
    Node *root = createBinarySearchTree();
    printBinarySearchtree(root);
    int TillDeleteAndDeleteNodeValue;
    cin>>TillDeleteAndDeleteNodeValue;
    while (TillDeleteAndDeleteNodeValue != -1)
    {
        cout<<"deletion start"<<endl;
        root = deleteNode(root,TillDeleteAndDeleteNodeValue);
        cout<<"deletion done"<<endl;
        printBinarySearchtree(root);
        cin>>TillDeleteAndDeleteNodeValue;        
    }
    
}