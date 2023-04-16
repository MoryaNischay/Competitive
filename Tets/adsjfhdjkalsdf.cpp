#include<bits/stdc++.h>
using namespace std;

long factor(long low, long high){
    // Count the number of multiples of 15 in the range [low, high]
    long count = 0;
    
    // Find the smallest multiple of 15 that is greater than or equal to low
    long first_multiple = low + (15 - (low % 15)) % 15;
    
    // Count the multiples of 15 between first_multiple and high (inclusive)
    count = (high - first_multiple + 15) / 15;
    
    return count;
}

int main(){
    long a=1;
    long b=1;
    cout<<factor(a,b);
}