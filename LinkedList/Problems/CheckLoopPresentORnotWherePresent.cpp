/**
 * Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 */


 #include<iostream>
 using namespace std;

 #include<map>




 class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        this->val = data;
        this->next = NULL;
    }
 };


class Solution {
    public:


    bool hasCycle(ListNode *head) {
        
        map<ListNode*,int> mp;
        ListNode* temp = head;
        while(temp!=NULL){
            if(mp[temp]==0){
                mp[temp] = 1;
            }
            else{
                return true;
            }
            temp = temp->next;
        }
        return false;

        
    }
};