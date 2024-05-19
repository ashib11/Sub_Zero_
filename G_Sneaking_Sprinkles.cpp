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
void prinQ(priority_queue<ll> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
}
void solve()
{
    int n;
    cin >> n;
    priority_queue<ll> pq;
    ll tsum = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        tsum += x;
        pq.push(x);
    }
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        ans += (x * n);
        tsum += x;
        ll hg = pq.top();
        pq.pop();
        tsum -= hg;
        ll niyeGelo = hg / 2;
        ll baki = hg - niyeGelo;
        tsum += baki;
        pq.push(baki);
    }
    cout << endl;
    ll ans = 0;
    while (!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
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
