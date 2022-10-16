#include <bits/stdc++.h>
#define show cout<<
#define take cin>>

using namespace std;

void solution(){
    int m,n,p;
    take m>>n>>p;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            take a[i][j];
        }
    }
    int difference=0;
    int max_column[n];
    for (int i = 0;i<n;i++){
        
        for(int j=0;j<m;j++){
            max_column[i]=max(max_column[i],a[j][i]);
        }
    }

    for (int i = 0;i<n;i++){
        if (a[p-1][i]<max_column[i]){
            difference+=max_column[i]-a[p-1][i];
        }  
    }
    show difference<<endl;
    
}

int main(){
    int t;
    take t;
    for (int i=1;i<=t;i++){
        show "Case #"<<i<<": ";
        solution();
    }
}