

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



class Solution {
public:
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
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode* temp = head;
        ListNode* midElement = midOfLinkedList(head);
        ListNode* nextMidElement = midElement->next;
        midElement->next = NULL;
        ListNode* reverseHead = reverseLinkedList(nextMidElement);
        while(reverseHead != NULL){
            if(temp->val != reverseHead->val){
                return false;
                break;
            }
            temp = temp->next;
            reverseHead = reverseHead->next;
        }
        return true;
        
    }
};




class Solution {
public:
    ListNode* reverse(ListNode* temp){
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* tempnext = NULL;
        while(curr!=NULL){
            tempnext = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tempnext;
        }
        return prev;
    }
    void printLinkedList(ListNode* head){
        ListNode* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }

    }
    ListNode* copyList(ListNode* head) {                     //deep copy 
    if (head == NULL) return NULL;
    ListNode* newHead = new ListNode(head->val);
    ListNode* curr = newHead;
    head = head->next;
    while (head != NULL) {
        curr->next = new ListNode(head->val);
        head = head->next;
        curr = curr->next;
    }
    return newHead;
}

    bool isPalindrome(ListNode* head) {
        // printLinkedList(head);
        ListNode* ReverseNode = copyList(head);
        ListNode* ReverseHead = reverse(ReverseNode);
        // printLinkedList(ReverseHead);
        ListNode* temp = head;
        // cout<<"original LINkedlist"<<endl;
        // printLinkedList(head);
        // cout<<endl;
        while(temp!=NULL){
            // cout<<"enter in while"<<endl;
            if(ReverseHead->val != temp->val){
                // cout<<ReverseHead->val<<" "<<temp->val<<endl;
                return false;
            }
            ReverseHead = ReverseHead->next;
            temp = temp->next;
        }
        return true;

        
        
    }
};