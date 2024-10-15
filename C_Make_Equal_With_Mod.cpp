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
    int on = 0;
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        if (i == 1)
            on++;
    }
    sort(all(v));
    bool cant = false;
    for (int i = 1; i < n; ++i)
    {
        if (v[i - 1] + 1 == v[i])
            cant = true;
    }
    if (on == n or on == 0)
    {
        cout << "YES" << endl;
    }
    else if (on and cant)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
