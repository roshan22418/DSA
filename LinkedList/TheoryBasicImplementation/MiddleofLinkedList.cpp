/*
for greedy for find the length of the array and then find the midelement

for better approach 
for find the midelement we use the slow and fast pointer and think about the even 
and also alert while conditon and also in fast condion how to move this thing*/



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


ListNode* midOfLinkedList(ListNode* head){
        ListNode* temp = head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next != NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }