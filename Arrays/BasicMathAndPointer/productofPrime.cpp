// User function Template for C++
#include<iostream>

using namespace std;

#include<vector>













// some bugs find out 


class Solution {
  public:
  vector<bool> prime(int n){
      vector<bool> seive(n+1,true);
    //   if(n>1){
    //       seive[0] = false;
    //       seive[1] = false;
    //   }

    //     if(n == 1){
    //         seive[0] = false;
    //   
    // }
    // seive[0] = false;
    // seive[1] = false;
    if (n >= 0) seive[0] = false;
    if (n >= 1) seive[1] = false;

      for(int i = 2;i*i<=n;i++){
          if(seive[i] == true){
             int j = i*i;
            while(j<=n){
                seive[j] = false;
                j += i;
            }
              
          }
          
      }
      return seive;
  }
    long long primeProduct(long long L, long long R) {
        vector<bool> basePrimeseive = prime(sqrt(R));
        vector<int> basePrime;
        for(int i = 2;i<=sqrt(R);i++){
            if(basePrimeseive[i] == true){
                basePrime.push_back(i);
                // cout<<"prime number is printing "<<endl;
                // cout<<i<<" ";
            }
            
            
        }
        // for(auto prime: basePrime){
        //     cout<<"prime number again prinitnn"<<endl;
        //     cout<<prime<<" ";
        // }
        vector<bool> finalPrime(R-L+1,true);
        if(L == 0 || L == 1){
            finalPrime[L] = false;
        }
        for(auto prime: basePrime){
            int firstMul = (L/prime)*prime;
            
            // cout<<prime<<" ";
            cout<<firstMul<<"this is ";
            
            if(firstMul<L){
                firstMul += prime;
            }
            firstMul  = max(firstMul,prime*prime);
            while(firstMul <= R){
                finalPrime[firstMul -L]  = false;
                firstMul += prime;
                
            }
        }
        
        long long int finalAns = 1;
        int size1 = finalPrime.size();
        cout<<size1<<endl;
        for(int i = 0;i<finalPrime.size();i++){
            if(finalPrime[i] == true){
                cout<<i<<" ";
                long long number = i+ L;
                finalAns = (finalAns*number)%(1000000007);
            }
        }
        return finalAns;

        // code here
        
    }
};
