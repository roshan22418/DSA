#include<iostream>

using namespace std;

#include<vector>
#include<cmath>


int exponetFindHelper(int a,int b){
    //normal way

    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans *a;
    }
    return ans;
    
}

int fasterWayExponent(int a, int b){
    if(b ==1){
        return a;
    }
    if (b & 1 == 0)
    {
        return pow(fasterWayExponent(a,(b/2)),2);
    }
    else
    {
        return pow(fasterWayExponent(a,(b/2)),2)*a;
    }
    
    
                         
}


int fastExponennt(int a,int b){
    int ans = 1;
    while(b!=0){
        if(b&1){
            ans = ans*a;
        }
        a = a*a;
        b>>=1;


    }
    return ans;
}

int main(){
    int a = 2;
    int b = 10;
    int aKaexponentB = exponetFindHelper(a,b);
    cout<<aKaexponentB<<endl;
    cout<<"by using faster way "<<fastExponennt(a,b);
    return 0;
}