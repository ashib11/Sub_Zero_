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
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> v(n, 0);
    v[0] = 1;
    int k = 1;
    for (int i = 1; i < n; ++i)
    {
        if (str[i] == str[i - 1])
            v[i] = ++k;
        else
        {
            k = 1;
            v[i] = k;
        }
    }
    for (int i = 0; i < n; ++i)
        cout << v[i] << " ";
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
