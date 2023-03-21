#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans = (ans +  i * (n - i + 1)) % MOD; // calculating beauty of each permutation
        }
        ans = (ans  * (n-1)) % MOD; // multiplying with (n-1)!
        cout << ans << endl;
    }
    return 0;
}
