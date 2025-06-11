#include<iostream>
using namespace std;




//by using recurssion

int gcdByRecurssion(int a,int b){
    if(a == 0 || b == 0){
        return a == 0 ? b : a;
    }
    if(a>b){
        return gcdByRecurssion(a-b,b);
    }
    else{
        return gcdByRecurssion(b-a,a);
    }
}



//by using loop


int gcd(int a,int b){
    if(a ==0 || b == 0){
        return a == 0 ? b :a;
    }
    while (a != 0 && b != 0)
    {
        if(a>b){
            a = a -b;
        }
        else{
            b = b -a;
        }
    }
    return a == 0 ? b : a;
    
}



int lCM(int a,int b){
    int gcdAns = gcd(a,b);
    return (a*b)/gcdAns;
}



int main(){
    int a = 0;
    int b = 12;
    int gcdAns = gcdByRecurssion(a,b);
    cout<<"GCD of two number " <<gcdAns<<endl;
    cout<<"LCM of two number "<<lCM(a,b);
    return 0;
}