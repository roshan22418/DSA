/**
 * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 */

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

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return false;
        }

        // do this thing or do below thing but prefer below thing then slow and fast condition check below not above while loop
        //  ListNode* slow = head;
        //  ListNode* fast = head->next;
        //  if(fast!=NULL){
        //      slow = slow->next;
        //      fast = fast->next;
        //  }
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL)
        {
            fast = fast->next;
            if (fast != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            if (slow == fast)
            {
                return true;
            }
        }
        return false;

        // map<ListNode*,int> mp;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     if(mp[temp]==0){
        //         mp[temp] = 1;
        //     }
        //     else{
        //         return true;
        //     }
        //     temp = temp->next;
        // }
        // return false;
    }
};