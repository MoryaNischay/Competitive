#include <bits/stdc++.h>
using namespace std;
int reductionCost(vector<int> nums)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto i : nums)
    {
        pq.push(i);
    }
    int ans = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        ans += a + b;
        pq.push(a + b);
    }
  return ans;
}

int main(){
    vector<int> nums = {1,2,3};
    cout << reductionCost(nums) << endl;
    return 0;
}