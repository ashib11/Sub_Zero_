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

void solve()
{
    vector<ll> v(20, 0);
    for (int i = 1; i < 19; ++i)
    {
        v[i] = v[i - 1] * 10 + 1;
    }
    set<ll> ans;
    for (int i = 1; i < 19; ++i)
    {
        for (int j = 1; j < 19; ++j)
        {
            for (int k = 1; k < 19; ++k)
            {
                ans.insert(v[i] + v[j] + v[k]);
            }
        }
    }

    int n;
    cin >> n;
    vector<ll> x;
    x.assign(all(ans));
    cout << x[n-1] << endl; 
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
