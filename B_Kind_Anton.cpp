#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }
    vector<int> ans(2, 0);
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > b[i] && !ans[0])
        {
            cout << "NO" << endl;
            return; 
        }
        else if (a[i] < b[i] && !ans[1])
        {
            cout << "NO" << endl;
            return;
        }
        if (a[i] == -1)
            ans[0] = 1;
        if (a[i] == 1)
            ans[1] = 1;
    }
    cout << "YES" << endl; 
}
int main()
{
    fastIO();
    int tc;
    // tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}