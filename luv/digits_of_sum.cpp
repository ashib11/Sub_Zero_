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
int fun(int n)
{
    if (n == 0)
        return 0;
    return fun(n / 10) + n % 10;
}
void solve()
{
    int n;
    cin >> n;
    cout << fun(n) << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}