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

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0 and b % 2 == 0)
        cout << "Yes" << endl;
    else if (a == b * 2 || b == a * 2)
    {
        cout << "No" << endl;
    }
    else if (a % 2 == 0 || b % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
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
