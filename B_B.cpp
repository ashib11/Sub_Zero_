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
    vector<int> v(3);
    map<int, bool> mp;
    for (auto &i : v)
    {
        cin >> i;
        mp[i] = true;
    }
    sort(all(v));
    int dif1 = v[1] - v[0];
    int dif2 = v[2] - v[1];
    int mn = min(dif1, dif2);
    for (int i = 0; i < 3; ++i)
    {
        int x = v[i] + mn;
        if (mp[x] == false)
        {
            cout << x << endl;
            return;
        }
    }
    cout << v[0] << endl;
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
