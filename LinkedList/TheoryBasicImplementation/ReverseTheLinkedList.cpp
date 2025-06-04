
 #include <iostream>
using namespace std;

#include <map>

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        this->val = data;
        this->next = NULL;
    }
};


ListNode* reverseLL(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = NULL;
    while (curr != NULL)
    {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
    
}