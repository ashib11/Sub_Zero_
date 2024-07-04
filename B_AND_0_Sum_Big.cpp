#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

vector<vector<int>> subsets(vector<int> &nums, int sz) {
    int n = nums.size();
    vector<vector<int>> subsets;
    for (int mask = 0; mask < (1 << n); ++mask) {
        vector<int> tmp;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                tmp.push_back(nums[i]);
            }
        }
        if (tmp.size() == sz) {
            int ans = tmp[0];
            for (int i = 1; i < sz; ++i) {
                ans &= tmp[i];
            }
            if (ans == 0) {
                subsets.push_back(tmp);
            }
        }
    }
    return subsets;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < (1 << k); ++i) {
        v.push_back(i);
    }
    auto yo = subsets(v, n);

    ll mx = -1;
    for (int i = 0; i < yo.size(); ++i) {
        ll tmp = 0;
        for (auto it : yo[i]) {
            tmp = (tmp + it) % MOD;
        }
        mx = max(mx, tmp);
    }
    
    ll ans = 0;
    for (auto it : yo) {
        ll tmp = 0;
        for (auto x : it) {
            tmp = (tmp + x) % MOD;
        }
        if (tmp == mx) ans = (ans + 1) % MOD;
    }
    
    cout << ans * 2 << endl;
}

int main() {
    fastIO();
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
