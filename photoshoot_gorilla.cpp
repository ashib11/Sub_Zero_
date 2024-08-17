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
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> el;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int upx = min(i, (n - k));
            int lwx = max(0, i - k + 1);
            int upy = min(j, m - k);
            int lwy = max(0, j - k + 1);
            ll val = (upx - lwx + 1) * (upy - lwy + 1); 
            el.push_back(val);
        }
    }
    int x;
    cin >> x;
    vector<ll> yo(x);
    for (auto &i : yo)
        cin >> i; 
    sort(allr(yo)), sort(allr(el));
    ll ans = 0;
    for (int i = 0; i < x; ++i)
    {
        ans+= (yo[i] * el[i]); 
    }
    cout << ans << endl;
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
