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
const int N = 1e5 + 10;
vector<int> ans(N);
void preCal()
{
    ll val = 0;
    for (int i = 2; i <= N; i += 2)
    {
        int t = i;
        while (t % 2 == 0)
        {
            t /= 2;
        }
        if (t == 1)
        {
            val = 0;
        }
        else
            val += 4;
        ans[i] = val;
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << ans[n] << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    preCal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
