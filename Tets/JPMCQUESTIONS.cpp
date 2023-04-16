#include <bits/stdc++.h>

using namespace std;

int NoOfOnesInBinary(int decimalNumber)
{
   int binaryNumber = 0;
   int i = 1;
   while (decimalNumber != 0) {
      binaryNumber += (decimalNumber % 2) * i;
      decimalNumber /= 2;
      i *= 10;
   }
   
   int count = 0;
   while (binaryNumber != 0) {
      if (binaryNumber % 10 == 1) {
         count++;
      }
      binaryNumber /= 10;
   }
   return count;
}

bool comparePairs(const pair<int, int>& p1, const pair<int, int>& p2) {
   if (p1.first == p2.first) {
      return p1.second < p2.second;
   }
   else {
      return p1.first < p2.first;
   }
}

vector<pair<int,int>> cardinalitySorting(vector<int> nums){
    vector<pair<int,int>> OnesInBinary;
    OnesInBinary.resize(nums.size());
    
    for(int i = 0; i < nums.size(); i++) {
        OnesInBinary[i].first = NoOfOnesInBinary(nums[i]);
        OnesInBinary[i].second = nums[i];
    }
      
    sort(OnesInBinary.begin(), OnesInBinary.end(), comparePairs);
    return OnesInBinary;
}

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

#include<bits/stdc++.h>
using namespace std;

vector<string> funWithAnagrams(vector<string> text){
    vector<string> ans;
    set<string> found;

    for(int i=0;i<text.size();i++)
    {
        string word=text[i];
        sort(word.begin(),word.end());
        if(found.find(word)==found.end()){
            ans.push_back(text[i]);
            found.insert(word);
        }
    }

      return ans;
}

string breakPalindrome(string palindromestr){
    string s = palindromestr;
    int n = s.size();
    if(n==1 || n==0)
        return "IMPOSSIBLE";
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != 'a') {
            s[i] = 'a';
            return s;
        }
    }
    s[n - 1] = 'b';
    return s;
}