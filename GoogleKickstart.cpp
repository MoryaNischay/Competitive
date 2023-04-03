#include <bits/stdc++.h>
#define show cout<<
#define take cin>>

using namespace std;

void solution(int l_track,int n){
    int laps=0,counter=0;
    for (int i=0;i<n;i++){
        int d_ran;
        char c;
        take d_ran >> c;
        if (c=='C'){
            counter = counter + d_ran;
            if (counter>=l_track){
                laps = laps + counter/l_track;
                counter = counter%l_track;
            }
        }
        else {
            counter=counter-d_ran;
            if (counter <= -l_track){
                laps = laps + abs(counter)/l_track;
                counter = -1*(abs(counter)%l_track);
            }
        } 
    } 
    show laps<<endl;
}

int main(){
    int t;
    take t;
    int l_track,n;
    for (int i=1;i<=t;i++){
        show "Case #"<<i<<": ";
        take l_track>>n;
        solution(l_track,n);
    }
}