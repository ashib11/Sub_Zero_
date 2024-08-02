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
    int n, a, b;
    cin >> n >> a >> b;
    deque<int> v;
    ll tmp = a;
    map<int, bool> mp;
    for (int i = a; i <= b; ++i)
    {

        v.push_back(i);
        mp[i] = true;
    }
    for (int i = a - 1; i > 0; --i)
    {
        v.push_back(i);
        mp[i] = true;
    }
    for (int i = b + 1; i <= n; ++i)
    {
        if (mp[i] == false)
        {
            v.push_front(i);
        }
    }

    int mn = 1e9, mx = -1;
    for (int i = 0; i < n; ++i)
    {
        if (i < n / 2)
        {
            mn = min(mn, v[i]);
        }
        else
            mx = max(mx, v[i]);
    }
    if (mn == a and mx == b)
    {
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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
