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
int arr[] = {32, 16, 8, 4, 2, 1};

void solve()
{
    ll t, p;
    cin >> t >> p;
    int val = p - t;
    bool check = false;
    for (int i = 0; i < 6; ++i)
    {
        if (arr[i] <= val)
        {
            if (arr[i] == 2)
                check = true;
            val -= arr[i];
        }
    }
    if (val)
        cout << "No" << endl;
    else if (check)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
