#include <iostream>
#include <algorithm>
using namespace std;

struct Call {
    int start_time, end_time, value;
};

bool cmp(Call a, Call b) {
    return a.end_time < b.end_time;
}

int main() {
    int n;
    cin >> n;
    Call calls[n];
    for (int i = 0; i < n; i++) {
        cin >> calls[i].start_time >> calls[i].end_time >> calls[i].value;
    }
    sort(calls, calls+n, cmp);
    int dp[n];
    dp[0] = calls[0].value;
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i-1], calls[i].value);
        for (int j = i-1; j >= 0; j--) {
            if (calls[j].end_time <= calls[i].start_time) {
                dp[i] = max(dp[i], dp[j] + calls[i].value);
                break;
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}