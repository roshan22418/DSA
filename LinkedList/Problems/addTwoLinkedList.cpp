/*
in this problem we need to make sure first create a head and also tail the track the last 
element and also make sure read quesion well and take time */


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


    ListNode* reverseLL(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;
        while(curr != NULL){
            // cout<<"enter in while loop"<<endl;
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;    //make sure return previous


    }


    void printReverseArray(ListNode* head){
        ListNode* temp = head;
        while(temp!= NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
            
        }
        cout<<endl;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* l1 = reverseLL(l1);
        // printReverseArray(l1);
        // cout<<l1->val;
        // ListNode* l2 = reverseLL(l2);
        // printReverseArray(l2);
        // cout<<l2->val;
        int carry = 0;
        int digit1 = 0;
        int digit2 = 0;
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(l1 != NULL  || l2 != NULL){
            if(l1 != NULL){
                // cout<<"enter ni l1"<<endl;
                digit1 = l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                // cout<<"enter ni l2"<<endl;
                digit2 = l2->val;
                l2 = l2->next;
            }
            int sum = digit1 + digit2 + carry;
            int digit = (sum)%10;
            carry = sum/10;
            digit1 = 0;
            digit2 = 0;
            if(head == NULL){
                // cout<<"creation enter ni l1"<<endl;
                head = new ListNode(digit);
                tail = head;
            }
            else{
                cout<<"creation2 ni l1"<<endl;
                cout<<digit<<endl;
                ListNode* newNodei = new ListNode(digit);
                // cout<<newNodei->val<<"this is our data"<<endl;
                tail->next = newNodei;
                tail = newNodei;
            }
        }
        if(carry != 0){
            ListNode* newNode2 = new ListNode(carry);
            tail->next = newNode2;
            tail = newNode2;

        }
        printReverseArray(head);
        // ListNode* finalAns = reverseLL(head);
        
        return head;
        
    }
};