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
ll mx = 1e10;
void solve()
{
    ll sum = 0;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 4, 0);
    v[0] = mx;
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        sum += v[i];
    }
    v[n + 1] = mx;

    priority_queue<ll> pq;
    for (int i = 1; i <= n; ++i)
    {
        ll cur = v[i] - min(v[i - 1], v[i + 1]);
        if (cur > 0)
            pq.push(cur);
        else
            pq.push(0);
    }

    ll sum2 = 0;
    for (int i = 0; i < k; ++i)
    {
        sum2 += pq.top();
        // cout << pq.top() <<" ";
        pq.pop();
    }
    cout << sum - sum2 << endl;
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
