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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int N = 1e6 + 10;
vector<int> alPrime;
vector<bool> checker(N);
void seive()
{
    alPrime.push_back(2);
    for (int i = 3; i * i <= N; i += 2)
    {
        if (checker[i] == false)
        {
            alPrime.push_back(i);
            for (int j = i * i; j <= N; j += i + i)
            {
                checker[j] = true;
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    ll ans = 0;
    vector<bool> vis(n, false);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n and str[j - 1] == '0'; j += i)
        {
            if (vis[j - 1] == false)
            {
                vis[j - 1] = true;
                ans += i;
                // cout << ans << ' ';
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    seive();
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
