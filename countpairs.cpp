#include <iostream>
using namespace std;

const int MAX = 10000000;

int dp[MAX + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 2; i <= MAX; i++) {
        if (dp[i] == 0) {
            for (int j = i; j <= MAX; j += i) {
                dp[j]++;
            }}}
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int ans = 1 << dp[n];  
        cout << ans << '\n';
    }

    return 0;
}