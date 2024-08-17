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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int st = -1, ed = -1;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 1 and st == -1)
            st = i;
        else if (v[i] == 1)
            ed = i;
    }
    if (ed == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        int ans = 0;
        for (int i = st; i <ed; ++i)
        {
            ans += v[i] == 0;
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
