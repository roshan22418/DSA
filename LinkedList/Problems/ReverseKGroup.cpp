

/*
in this problem we need to ensure which thing to return and recurssion ans where to add and which part to add
and also make sure which thing return recurrsion */


 
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

    ListNode* kthNode(ListNode* head,int kValue){
        ListNode* temp = head;
        int k = kValue;
        while(k>1 && temp != NULL){
            k--;
            temp = temp->next;
        }
        if(k==1){
            return temp;
        }
        else{
            return NULL;
        }
        
    }

    // ListNode* Reverse(ListNode*curr,ListNode* kthNode){
    //     ListNode* prevNode = NULL;
    //     ListNode* temp = curr;
    //     while(temp != kthNode){
    //         cout<<"eneter in reverse"<<endl;
    //         ListNode* next1 = temp->next;
    //         temp->next = prevNode;
    //         // next1->next = temp;
    //         prevNode = temp;
    //         temp = next1;
    //     }
    //     ListNode* next1 = temp->next;
    //     temp->next = prevNode;
    //     // next1->next = temp;
    //     return temp;

    // }
    ListNode* reverseKGroup(ListNode* head, int k){
        if(head == NULL || head->next == NULL || k ==1){
            return head;
        }
        int pos = 0;
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;
        ListNode* kthNodehave = kthNode(head,k);
        // cout<<kthNodehave->val<<endl;
        if(kthNodehave != NULL){
            while(pos<k && curr != NULL){
                pos++;
                nextNode = curr->next;
                curr->next = prev;
                prev = curr;
                curr = nextNode;
            }

        }
        else{
            return head;
        }
        
        ListNode* recurAns = NULL;
        if(nextNode != NULL){
            ListNode* recurAns = reverseKGroup(nextNode,k);
            head->next = recurAns;
        }
        return prev;
               // ListNode* temp = head;
        // ListNode* preNode = NULL;
        // ListNode* NextNode = NULL;
        // ListNode* finalHead = NULL;
        // while(temp != NULL){
        //     cout<<"enter in main Funcion"<<endl;
        //     ListNode* KNode = kthNode(temp, k);
        //     if(KNode == NULL){
        //         if(preNode != NULL){
        //             temp->next = NextNode;
        //         }
                
        //         break;                
        //     }
        //     else{
        //         preNode = KNode;
        //         NextNode = KNode->next;
        //         KNode->next = NULL;
        //         ListNode* Kthhead = Reverse(temp,KNode);
        //         if(temp == head){
        //             finalHead = Kthhead; //KNode;
        //         }
        //         temp->next = NextNode;
        //         temp = NextNode;
        //     }


        // }
        // return finalHead;
        
    }
};