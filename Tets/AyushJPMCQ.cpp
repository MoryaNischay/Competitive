// #include<bits/stdc++.h>
// using namespace std;

// int maxIndex(int steps,int badElement){
// int answer;
// int k=1;
// // find badElment is a sum of first k number or not
// while (badElement>0)
// {
// badElement-=k;
// k++;
// }
// // badElement is a sum of first k number
// if(badElement==0)
// {
// answer = ((steps)*(steps+1))/2-1;
// }
// // badElement is not a sum of first k number
// else
// {
// answer = ((steps)*(steps+1))/2;
// }
// // output
// return answer;
// }

// int main(){
//     int n=3;
//     int b=3;
//     cout<<maxIndex(n,b);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+5;

int n, p;
long long shares[MAXN];

bool check(long long x) {
    int cnt = 0;
    for (int i = 0; i < n; ) {
        long long sum = 0;
        while (i < n && sum + shares[i] <= x) {
            sum += shares[i];
            i++;
        }
        cnt++;
    }
    return cnt <= p;
}

int main() {
    cin >> n >> p;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> shares[i];
        sum += shares[i];
    }
    if (p > n) {
        cout << "-1\n";
        return 0;
    }
    long long lo = 1, hi = sum, ans = sum;
    while (lo <= hi) {
        long long mid = (lo + hi) / 2;
        if (check(mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    cout << ans << "\n";
    return 0;
}