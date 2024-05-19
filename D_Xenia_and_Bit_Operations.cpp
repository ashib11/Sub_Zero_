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
const int N = 2e5+10;
ll arr[N];
ll tre[(N * 3)+10];
void segTree(ll node, ll b, ll e, ll cnter)
{
    if (b >= e)
    {
        tre[node] = arr[b];
        return;
    }
    ll left = node * 2;
    ll right = node * 2 + 1;
    ll mid = (b + e) / 2;
    segTree(left, b, mid, cnter + 1);
    segTree(right, mid + 1, e, cnter + 1);
    if (cnter % 2)
        tre[node] = tre[left] | tre[right];
    else
        tre[node] = tre[left] ^ tre[right];
}
void update(ll node, ll b, ll e, ll l, ll newVal, ll cur)
{
    if (l > e || l < b)
        return;
    if (b >= l and e <= l)
    {
        tre[node] = newVal;
        return;
    }
    ll left = node * 2;
    ll right = node * 2 + 1;
    ll mid = (b + e) / 2;
    update(left, b, mid, l, newVal, cur + 1);
    update(right, mid + 1, e, l, newVal, cur + 1);
    if (cur % 2)
        tre[node] = tre[left] | tre[right];
    else
        tre[node] = tre[left] ^ tre[right];
}
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll od = 0;
    for (int i = 1; i <= (1 << n); ++i)
        cin >> arr[i];
    n % 2 == 1 ? od = 1 : od = 0;
    segTree(1, 1, (1 << n), od);
    while (q--)
    {
        ll l, val;
        cin >> l >> val;
        update(1, 1, (1 << n), l, val, od);
        cout << tre[1] << endl;
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
