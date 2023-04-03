#include <bits/stdc++.h>
using namespace std;

//wap tto take test cases and then 2 long long integers and then print the power of the 2nd integer to the 1st integer 

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        cout<<pow(a,b)<<endl;
    }
}