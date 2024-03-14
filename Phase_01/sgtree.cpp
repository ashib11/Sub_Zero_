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
const int mx = 1e5 + 1;
int arr[mx];
int tre[mx * 3];
void segTree(int node, int st, int ed)
{
    if (st == ed)
    {
        tre[node] = arr[st];
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (st + ed) / 2;
    segTree(left, st, mid);
    segTree(right, mid + 1, ed);
    tre[node] = min(tre[left], tre[right]);
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INT_MAX;
    if (b >= i and e <= j)
        return tre[node];
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(left, b, mid, i, j);
    int p2 = query(right, mid + 1, e, i, j);
    return min(p1, p2);
}
void update(int node, int b, int e, int i, int newVal)
{
    if (i > e || i < b)
        return;
    if (b >= i and e <= i)
    {
        tre[node] = newVal;
        return;
    }
    int left = node * 2;
    int right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(left, b, mid, i, newVal);
    update(right, mid + 1, e, i, newVal);
    tre[node] = tre[left] + tre[right];
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
        cout << "Case " << i << ":\n";
        solve();
    }
    return 0;
}
