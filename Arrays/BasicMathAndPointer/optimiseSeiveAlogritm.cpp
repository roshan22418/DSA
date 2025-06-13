#include<iostream>
using namespace std;
#include<vector>


int NoofPrimeTillN(int n){
    vector<int> sieve(n+1,true);
    int count = 0;
    sieve[0] = sieve[1] = false;
    for(int i = 2;i*i<=n;i++){   // first optimization in outer loop because iner loop not run if we increate the
        // the value after sqrt(n) 
        if(sieve[i]){
            count +=1;
            int j = i*i;     // because from 1 to i*i -1 already done by previous table
            while (j<=n)
            {
                sieve[j] = false;
                j = j+i;
            }
            
        }

    }
    return count;
}



int main(){
    int n = 100;
    int totalPrime = NoofPrimeTillN(n);
    cout<<"no of prime strictly less than "<<n<<" "<<totalPrime;
    return 0;
}