#include <iostream>
#include <vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int reverse(vector<int> &nums)
{
    //reverse the integer string in the vector and the push them back in the vector
    int k=nums.size();
    for(int i=0;i<k;i++)
    {
        string s=to_string(nums[i]);
        reverse(s.begin(),s.end());
        nums.push_back(stoi(s));
    }
    //find the distinct elements in the vector
    //return total number of unique elements in the vector
    
}


int main(){
    vector<int> nums = {1,13,10,12,31};
    cout<<reverse(nums);
    return 0;
}