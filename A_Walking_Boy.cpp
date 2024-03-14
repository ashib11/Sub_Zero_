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
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    vector<int> ans(n, 0);
    ans[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        ans[i] = v[i] - v[i - 1];
    }
    int cnt = 0;
    int val = *max_element(all(ans));
    for (int i = 0; i < n; ++i)
    {
        if (ans[i] >= 120)
            cnt++;
    }
    int last = 1444 - v[n - 1];
    if (val >= 240 or last >= 240 or cnt >= 2)
    {

        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
