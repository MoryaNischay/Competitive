#include<bits/stdc++.h>
using namespace std;

int maxIndex(int steps,int badElement){
int answer;
int k=1;
// find badElment is a sum of first k number or not
while (badElement>0)
{
badElement-=k;
k++;
}
// badElement is a sum of first k number
if(badElement==0)
{
answer = ((steps)*(steps+1))/2-1;
}
// badElement is not a sum of first k number
else
{
answer = ((steps)*(steps+1))/2;
}
// output
return answer;
}

int main(){
    int n=3;
    int b=3;
    cout<<maxIndex(n,b);
    return 0;
}

