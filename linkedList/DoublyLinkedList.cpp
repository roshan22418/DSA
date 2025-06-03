#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        cout << "call the deconstructor" << endl;
    }
};

void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int returnLength(Node *head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        // cout<<temp->data<<"->";
        length += 1;
        temp = temp->next;
    }
    return length;
}

//  else if(Position==length){
//         Node* temp = head;
//         while (temp->next->next !=NULL)
//         {
//             temp= temp->next;
//         }
//         Node* newtemp = temp->next;
//         newtemp->prev = NULL;
//         cout<<"newtemp->prev or newtemp->next "<<newtemp->prev<<newtemp->next;
//         temp->next = NULL;
//         delete newtemp

// else
//     {
//         Node* prev = NULL;
//         Node* curr = head;
//         while (Position!=1)
//         {
//             prev = curr;
//             curr = curr->next;
//             Position--;
//         }
//         prev->next = curr->next;
//         curr->next->prev = prev;
//         delete curr;

//     }




void DeleteLinkedList(Node* &head,int position){
    int length = returnLength(head);
    cout<<"print the position "<<position<<" "<<head->data<<endl;
    if (head==NULL)
    {
        // cout<<"delete the temp"<<endl; 
        cout<<"cannot delete due to empty linkedList"<<endl;
        return;
    }
    else if (position==1)
    {
        // cout<<"delete the temp"<<endl;
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        // cout<<"delete the temp 2"<<endl;
        // head = head->next;
        // cout<<"delete the temp 3"<<endl;
        head->prev = NULL;
        // cout<<"delete 3the temp 4"<<endl;  
        delete temp;      
    }
    else if(position==length){
        Node* temp = head;
        while (temp->next->next!=NULL)
        {
            temp = temp->next;            
        }
        Node* newTemp = temp->next;
        temp->next = NULL;
        newTemp->prev = NULL;
        delete newTemp;       

    }
    else{
        Node* prev1 = NULL;
        Node* curr = head;
        while (position!=1)
        {
            prev1 = curr;
            curr = curr->next;
            position--;
        }
        prev1->next = curr->next;
        curr->next->prev = prev1;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;       
        
    }
    
    

}

void insertionLinkedList(Node *&head, int data, int Position)
{
    Node *newNode = new Node(data);
    int length = returnLength(head);
    if (head == NULL)
    {
        head = newNode;
    }
    else if (Position == 1)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if (Position == length + 1)
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        while (Position != 1)
        {
            prev = curr;
            curr = curr->next;
            Position--;
        }
        prev->next = newNode;
        newNode->prev = prev;
        newNode->next = curr;
        curr->prev = newNode;
    }
}

int main()
{
    // Node* first = new Node(30);
    // Node* second = new Node(40);
    // first->next = second;
    // second->prev = first;
    Node *head = NULL;
    // insertionLinkedList(head,3,1);
    insertionLinkedList(head, 2, 1);
    insertionLinkedList(head, 4, 1);
    insertionLinkedList(head, 4, 2);
    insertionLinkedList(head, 4, 4);
    insertionLinkedList(head, 7, 3);
    // DeleteLinkedList(head,2);
    // DeleteLinkedList(head,5);
    DeleteLinkedList(head,1);
    PrintLinkedList(head);
    return 0;
}
