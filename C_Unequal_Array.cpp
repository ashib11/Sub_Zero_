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
    for (auto &I : v)
        cin >> I;
    int l = -1, r = -1;
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] == v[i + 1])
            if (l == -1)
                l = i;
            else
                r = i;
    } 
    if (l == -1 or r == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << max(abs(l+1 - r), 1) << endl;
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
