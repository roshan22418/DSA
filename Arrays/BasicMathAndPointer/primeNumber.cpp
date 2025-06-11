#include<iostream>
using namespace std;

#include<vector>


class Solution {
public:
    //  bool isPrime(int n){
    //         for(int i = 2;i*i<=n;i++){
    //             if(n%i ==0){
    //                 return false;
    //             }
    //         }
    //         return true;
    //     }



    int countPrimes(int n) {
        //seive of eratosthenes
        if(n<=1){
            return 0;                // add this line is very important is not then vector is not asssign 0 and 1 index and we access that index that why gives error;
        }
        vector<bool> prime(n,true);
        prime[0] = prime[1] = false;
        int count = 0;
        for(int i = 2; i<n; i++){
            if(prime[i] == true){
                count += 1;
                int j = i*2;
                while(j<n){
                    prime[j] = false;
                    j += i;
                }

            }
        }
        return count;
        // //naive approach        
        // int count = 0;
        // for(int i = 2;i<n;i++){
        //     if(isPrime(i)){
        //         count ++;
        //     }
        // }
        // return count;
        
    }
};