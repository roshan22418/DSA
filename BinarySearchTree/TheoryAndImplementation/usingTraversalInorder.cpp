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

// Node *createBinarySearchTreeSolver(int data, Node *root)
// {
//     if (root == NULL)
//     {
//         root = new Node(data);
//         return root;
//     }

//     if (root->data >= data)
//     {
//         root->left = createBinarySearchTreeSolver(data, root->left);
//     }
//     else
//     {
//         root->right = createBinarySearchTreeSolver(data, root->right);
//     }
//     return root;
// }

// Node *createBinarySearchTree()
// {
//     int data;
//     cin >> data;
//     Node *root = NULL;

//     while (data != -1)
//     {

//         root = createBinarySearchTreeSolver(data, root);
//         cin >> data;
//     }
//     return root;
// }

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

// Node *maxElement(Node *root)
// {
//     if (root==NULL){
//         return NULL;
//     }
//     Node* temp = root;
//     while (temp->right != NULL)
//     {
//         temp = temp->right;
//     }
//     return temp;
// }

// Node *MinElement(Node *root)
// {
//     if (root==NULL){
//         return NULL;
//     }
//     Node* temp = root;

//     while (temp->left != NULL)
//     {
//         temp = temp->left;
//     }
//     return temp;
// }

// Node *deleteNode(Node *root, int data)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->data == data)
//     {

//         // here are total 4 cases
//         if (root->left == NULL && root->right == NULL)
//         {
//             delete root;
//             return NULL;
//         }
//         else if (root->left == NULL && root->right != NULL)
//         {
//             Node *subtree = root->right;
//             delete root;
//             return subtree;
//         }
//         else if (root->left != NULL && root->right == NULL)
//         {
//             Node *subtreeleft = root->left;
//             delete root;
//             return subtreeleft;
//         }
//         else
//         {
//             // in this case have both left and right are not null

//             Node *maxValue = maxElement(root->left);
//             int value = maxValue->data;
//             root->data = maxValue->data;
//             root->left = deleteNode(root->left, value);
//             return root;
//         }
//     }
//     else if(root->data > data)
//     {

//         //check the data go left side
//         root->left = deleteNode(root->left,data);
//     }
//     else
//     {
//         root->right = deleteNode(root->right,data);

//     }
//     return root;

// }

Node *createBSTusingInorder(vector<int> Inorder, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = (s + e) / 2;
    int midElement = Inorder[mid];
    Node *root = new Node(midElement);
    root->left = createBSTusingInorder(Inorder, s, mid - 1);
    root->right = createBSTusingInorder(Inorder, mid + 1, e);
    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        Node *front = q1.front();
        q1.pop();
        if (front == NULL)
        {
            cout << endl;
            if (!q1.empty())
            {
                q1.push(NULL);
            }
        }
        else
        {
            cout << front->data<<" ";
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

int main()
{

    vector<int> inorder = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = inorder.size();
    Node *root = createBSTusingInorder(inorder, 0, size - 1);
    cout << "creating done" << endl;
    // printBinarySearchtree(root);
    levelOrderTraversal(root);
    // Node *root = createBinarySearchTree();
    // printBinarySearchtree(root);
    // int TillDeleteAndDeleteNodeValue;
    // cin>>TillDeleteAndDeleteNodeValue;
    // while (TillDeleteAndDeleteNodeValue != -1)
    // {
    //     cout<<"deletion start"<<endl;
    //     root = deleteNode(root,TillDeleteAndDeleteNodeValue);
    //     cout<<"deletion done"<<endl;
    //     printBinarySearchtree(root);
    //     cin>>TillDeleteAndDeleteNodeValue;
    // }
}