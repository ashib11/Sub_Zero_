#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template <typename T>
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,
                         tree_order_statistics_node_update>;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        mp[cnt]++;
        cnt++;
        if (i % 5 == 0)
        {
            cnt = 0;
        }
    }
    string ans = "aeiou";
    for (auto [a, b] : mp)
    {
        // cout << a << ' ' << b << endl;
        for (int i = 0; i < b; ++i)
        {
            cout << ans[a];
        }
    }
    cout << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}