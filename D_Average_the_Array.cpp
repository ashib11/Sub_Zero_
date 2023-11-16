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
ll n;
vector<ll> v;
vector<ll> prex(n + 3, 0);
void precal() {
    prex.resize(n + 3, 0);
    for (int i = 0; i < n; ++i) {
        prex[i + 1] = prex[i] + v[i];
    }
}
bool check(ll k, ll m)
{
    ll sum = 0;
    for (int i = m; i <= n; ++i)
    {
        sum = min(sum, prex[i - m]);
        double avg = (prex[i] * 1.0 - sum * 1.0) / m * 1.0;
        if (avg < k)
            return true;
    }
    return false;
}
ll func(ll k)
{
    int l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (check(k, m))
        {
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}
void solve() {
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    precal();  
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; ++i) {
        ll k;
        cin >> k;
        cout << func(k) << endl;
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
