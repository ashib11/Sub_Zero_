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
    string str;
    cin >> str;
    if (n <= 2)
    {
        int ans = stoi(str);
        cout << ans << endl; 
        return;
    }
    int z = 0, one = 0;
    for (auto it : str)
    {
        if (it == '0')
            z++;
        else if (it == '1')
            one++;
    }
    if (z)
    {
        cout << 0 << endl;
    }
    else if (one == n)
    {
        cout << 1 << endl;
    }

    else
    {
        ll ans = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            if (str[i] != '1')
            {
                ans += (str[i]) - 0;
            }
        }
        cout << ans << endl;
    }
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
