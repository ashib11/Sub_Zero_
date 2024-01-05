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
// find_by_order();
// order_of_key();
unordered_map<string, bool> chcker;
ll fun(string s)
{
    int n = s.length();
    if (n < 2)
    {
        return 1;
    }
    if (chcker[s.substr(1)])
    {
        return 0;
    }
    if (chcker[s.substr(2)])
    {
        return 0;
    }
    chcker[s.substr(1)] = true;
    chcker[s.substr(2)] = true;

    int first = fun(s.substr(1));
    int second = fun(s.substr(2));
    return first + second;
}
void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    ll ans = fun(a);
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
