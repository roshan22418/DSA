/*in this problem to find the kthsmallest(use max heap) and ktlargestLEement(use maxheap) to find
this kth element smallest or largest so we need to first insert kth element in pq and then check according to 
conditon to find the max or min heap so if min then check array element of top element is smaller than top then pop and then 
insert in max heap
so top element is the kth smallest element

so time complexity is O(nlog(k))
and space complexity is O(k)

and One algorith do this task in O(n) and space (1) is QuickSElect*/




#include<iostream>
using namespace std;
#include<vector>
#include<queue>




class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minpq;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            if(minpq.size()<k){
                minpq.push(nums[i]);
            }
            else if(minpq.top()<nums[i]){
                minpq.pop();
                minpq.push(nums[i]);
            }
        }
        return minpq.top();
       

        
        
    }


    int findKthSmallest(vector<int>& nums, int k) {
        priority_queue<int> maxpq;
        int size = nums.size();
        for(int i = 0;i<size;i++){
            if(maxpq.size()<k){
                maxpq.push(nums[i]);
            }
            else if(maxpq.top()>nums[i]){
                maxpq.pop();
                maxpq.push(nums[i]);
            }
        }
        return maxpq.top();
       

        
        
    }
};





