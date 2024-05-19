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

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> s(n, 0);
    for (auto &i : s)
        cin >> i;
    sort(all(s));

    ll val = 0;
    for (int i = 0; i < n; ++i)
    {
        val += (i + 1) * ((a * s[i]) + b);
    }
    // cout << val << endl; 
    sort(allr(s));
    ll val2 = 0;
    for (int i = 0; i < n; ++i)
    {
        val2 += (i + 1) * ((a * s[i]) + b);
    }
    cout << max(val,val2) << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
