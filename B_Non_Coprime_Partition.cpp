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

void solve()
{
    int n;
    cin >> n;
    if (n <= 2)
    {
        cout << "No" << endl;
        return;
    }
    ll k = (n / 2);
    if (n % 2)
    {
        k = (n + 1) / 2;
    }
    cout << "Yes" << endl;
    cout << 1 << ' ' << k << endl;
    cout << n - 1  ;
    for (int i = 1; i <= n; ++i)
    {
        if (i == k)
            continue;
        else
            cout << " " << i;
    }
    cout << endl;
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
