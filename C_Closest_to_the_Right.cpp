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
int n, nq;
vector<int> v;
int bs(int val, int l, int r)
{
    while (r > l)
    {
        int mid = (l + r) / 2;
        if (val > v[mid])
        {
            l = mid + 1;
        }
        else
            r = mid;
    }
    return l+1;
}
void solve()
{

    cin >> n >> nq;
    v.resize(n);
    for (auto &i : v)
        cin >> i;
    while (nq--)
    {
        int x;
        cin >> x;
        cout << bs(x, 0, n ) << endl;
    }
    cout << endl;
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
