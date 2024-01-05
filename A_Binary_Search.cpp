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
bool bs(vector<int> &v, int l, int r, int x)
{
    if (l > r)
        return false;
    int mid = (l + r) / 2;
    if (v[mid] == x)
        return true;
    else if (v[mid] < x)
    {
        return bs(v, mid + 1, r, x);
    }
    else
        return bs(v, l, mid - 1, x);
}
void solve()
{
    int n, nq;
    cin >> n >> nq;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    while (nq--)
    {
        int x;
        cin >> x;
        if (bs(v, 0, n-1 , x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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
