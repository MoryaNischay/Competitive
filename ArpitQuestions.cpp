#include<bits/stdc++.h>
using namespace std;

string isPossible(int a,int b,int c,int d){
    if(a==c && b==d) {
            return "Yes" ;
        }
    if(c == d) return "No";
         while(c>0 && d>0) {
             if(c == d) return "No";
             if(c > d) 
                c = c - d;
             else
                d = d - c;
             if(a ==c && b == d)
                 return "Yes";
         }
         return "No";
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<isPossible(a,b,c,d)<<endl;
    }
    return 0;
}