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
const int N = 1e5;
int arr[N];
int tre[3 * N + 1];
void segTree(int node, int b, int e)
{
    if (b >= e)
    {
        tre[node] = arr[b];
        return;
    }
    int left = node * 2;
    int right = (node * 2) + 1;
    int mid = (b + e) / 2;
    segTree(left, b, mid);
    segTree(right, mid + 1, e);
    tre[node] = min(tre[left], tre[right]);
}
int query(int node, int b, int e, int l, int r)
{
    if (l > e || r < b)
        return INT_MAX;
    if (b >= l and e <= r)
        return tre[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(left, b, mid, l, r);
    int p2 = query(right, mid + 1, e, l, r);
    return min(p1, p2);
}
void solve()
{
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    segTree(1, 1, n);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(1, 1, n, l, r) << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Scenario #" << i << ":" << endl;
        solve();
    }
    return 0;
}
