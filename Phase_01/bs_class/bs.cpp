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

vector<int> v(100);
int val;
bool search(int l, int r)
{
    if (l > r)
        return false;
    int mid = (l + r) / 2;
    if (v[mid] == val)
        return true;
    else if (v[mid] > val)
    {
        return search(l, mid - 1);
    }
    else
    {
        return search(mid + 1, r);
    }
}
void solve()
{
    int n; 
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i];
    // sort(all(v));
    val = 0;
    cout << search(1, n ) << endl;
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
