#include<iostream>
using namespace std;




/* in this problem we make sure while loop condition 
curr->next != NULL due to if have 9 then we add a 1 then 10 and after doint and our conditon 
curr != NULL its means our curr value goes on null and if we insert the vlaue 1 then error 
come like segmentaion fault*/

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
  Node* reverseLL(Node* head){
    //   Node* temp = head;
      Node* curr = head;
      Node* prev = NULL;
      while(curr != NULL){
          Node* nextNode = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nextNode;
      }
      return prev;
  }
    Node* addOne(Node* head) {
        if(head == NULL){
            head = new Node(1);
            return head;
        }
        Node* reverseNode = reverseLL(head);
        Node* curr = reverseNode;
        int digit = 0;
        int carry = 1;
        while(curr->next != NULL){
            int value = curr->data;
            digit = (carry + value)%10;
            carry = (carry + value)/10;
            curr->data = digit;
            // if(curr ->next != NULL){
            curr = curr->next;
            // }
            
        }
        int value1 = curr->data;
        digit = (carry + value1)%10;
        carry = (carry + value1)/10;
        curr->data = digit;
        if(carry != 0){
            Node* newNode = new Node(carry);
            curr->next = newNode;
        }
        
        head = reverseLL(reverseNode);
        return head;
        
        
        // Your Code here
        
        // return head of list after adding one
    }
};