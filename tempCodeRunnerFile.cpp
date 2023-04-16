#include<bits/stdc++.h>
using namespace std;

long factor(long low,long high){
    long count=0;
    for (long i = low; i <= high; i++)
    {
        int N=i;
        while(N%3==0){
            N=N/3;
        }
        while(N%5==0){
            N=N/5;
        }

        if(N==1){
            count++;
        }
    }
    return count;
}

int main(){
    long long int a=73328490180;
    long long int b=707788123789;
    cout<<factor(a,b);
}