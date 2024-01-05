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
    string a, b;
    cin >> a >> b;
    map<char, int> av, bv;
    for (int i = 0; i < (int)a.size(); ++i)
    {
        av[a[i]]++;
    }
    for (int i = 0; i < (int)b.size(); ++i)
    {
        bv[b[i]]++;
    }

    int ans = 0;
    for (auto it : av)
    {
        auto ch = it.first;
        if (bv.find(ch) != bv.end())
        {
            ans += min(it.second, bv[ch]);
        }
    }
    cout << ans << endl;
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
