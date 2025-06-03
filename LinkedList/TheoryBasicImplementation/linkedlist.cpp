#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    { // Default constructor
        cout << "This is intilize the default constructor" << endl;
        this->next = NULL;
    }
    Node(int val)
    { //  Parameterized Constructo
        this->data = val;
        this->next = NULL;
    }
};

void printreverseLinkedlist(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    // cout<<head->data<<"->";   // print head to tail;
    printreverseLinkedlist(head->next);
    cout << head->data << "->"; // Reverse print
}

void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

void insertionNodeAthead(Node *&head, int data)
{
    Node *newHead = new Node(data);
    if (head == NULL)
    {
        head = newHead;
    }
    else
    {
        // Node* newHead = new Node(data);
        newHead->next = head;
        head = newHead;
    }
}

void insertionAtTail(Node *&head, int data)
{
    Node *newHead = new Node(data);
    if (head == NULL)
    {
        head = newHead;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *tail = new Node(data);
        temp->next = tail;
    }
}

int LengthOfLinkedList(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertionInLinkedList(Node *&head, int position, int data)
{
    int length = LengthOfLinkedList(head);
    if (position <= 1)
    {
        insertionNodeAthead(head, data);
    }
    else if (position > length)
    {
        insertionAtTail(head, data);
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }
        Node *newNOde = new Node(data);
        prev->next = newNOde;
        newNOde->next = curr;
    }
}

Node*  ReturntailPointer(Node* head){
    Node* temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    return temp;
    
}

void DeleteInLinkedList(Node* &head,int position){
    int len = LengthOfLinkedList(head);
    if (head==NULL)
    {
        cout<<"cannot delete due to empty linkedlist"<<endl;
    }
    
    if (position==1)
    {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }
    else if (position==len)
    {   
        Node* temp = head;
        while (temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        Node* newtemp = temp->next;
        temp->next = NULL;
        delete newtemp;               
        
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        while (position!=1)
        {
            prev = curr;
            curr = curr->next;
            position--;
        }
        prev->next = curr->next;
        delete curr;       

    }
    
    
}
int main()
{
    // printreverseLinkedlist(head);
    Node *head = NULL;
    // insertionNodeAthead(head, 40);
    // insertionNodeAthead(head, 30);
    // insertionNodeAthead(head, 20);
    // insertionNodeAthead(head, 10);
    // insertionNodeAthead(head, 5);
    // insertionInLinkedList(head,1,5);
    insertionInLinkedList(head,1,2);
    insertionInLinkedList(head,2,3);
    insertionInLinkedList(head,3,4);
    insertionInLinkedList(head,4,5);
    insertionInLinkedList(head,2,45);
    DeleteInLinkedList(head,1);
    DeleteInLinkedList(head,3);
    DeleteInLinkedList(head,3);
    DeleteInLinkedList(head,2);
    DeleteInLinkedList(head,1);
    PrintLinkedList(head);

    return 0;
}
