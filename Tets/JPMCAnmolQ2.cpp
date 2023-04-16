#include <bits/stdc++.h>
using namespace std;

int deleteProducts(int ids_count,vector<int> ids,int m)
{
    unordered_map<int,int> mp;
    for(int i=0;i<ids_count;i++)
    {
        mp[ids[i]]++;
    }
    priority_queue<int> pq;
    for(auto i:mp)
    {
        pq.push(i.second);
    }
    while(m--)
    {
        int x=pq.top();
        pq.pop();
        x--;
        if(x)
        {
            pq.push(x);
        }
    }
    return pq.size();
}

int main() {
    vector<int> bag = {1,2,3,4,5};
    int m = 2;
    cout << deleteProducts(4,bag, m) << endl;
    return 0;
}