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
    ll n, nq;
    cin >> n >> nq;
    vector<ll> v(n);
    for (auto &i : v)
        cin >> i;
    ll move = 0;
    while (nq--)
    {
        char x;
        int a;
        cin >> x >> a;
        if (x == 'R')
        {
            int indx = (a - 1 + move) % n;
            cout << v[indx] << endl;
        }
        else if (x == 'C')
        {
            move += a;
            move %= n;
        }
        else
        {
            move -= a;
            move = (move + n) % n;
        }
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
