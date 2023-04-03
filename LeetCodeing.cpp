#include <iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

void noboxes(float a,float b,float c){
    int temp = ceil(b/c);
    cout<<int (temp*a)<<endl;
}


int main(){
    int test_case;
    cin >> test_case;
    float shelf,books,box_cap;
    for(int i=0;i<test_case;i++)
    {
        cin >> shelf >> books >> box_cap;
        noboxes(shelf,books,box_cap);
    }
    return 0;
}