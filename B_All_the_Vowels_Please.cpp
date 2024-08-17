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
    int k;
    cin >> k;
    bool f = true;
    int n, m;
    for (int i = 5; i < k; ++i)
    {
        if (k % i == 0)
        {
            n = i;
            m = k / i;
            if (n >= 5 and m >= 5)
            {
                f = false;
                break;
            }
        }
    }
    if (f)
    {
        cout << -1 << endl;
        return;
    }

    string str = "aeiou";
    int t = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << str[(j+i) % 5];
          
        }
        // cout << endl; 
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
