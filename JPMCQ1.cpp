#include<bits/stdc++.h>
using namespace std;

void findWinner(string s){
    int a = 0, b = 0;
        
        for(int i=1; i<s.size()-1; i++){
            if(s[i-1] == s[i] && s[i] == s[i+1]){
                if(s[i] == 'w')
                    a++;
                else
                    b++;
			}
        }   
                    
        if(a > b){
            cout<<"wendy";}
        else {
            cout<<"bob";
        }

}

int main(){
    string s;
    cin>>s;
    findWinner(s);
}