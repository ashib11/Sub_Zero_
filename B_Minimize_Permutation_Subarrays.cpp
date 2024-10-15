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
    map<int, int> mp;
    vector<int> v(n + 2, 0);

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        v[i] = x;
        mp[x] = i;
    }
    int prev = mp[n];
    int right = max(mp[1], mp[2]);
    int left = min(mp[1], mp[2]);
    if (prev < left)
    {
        std::cout << prev << ' ' << left << endl; 
    }
    else if (prev > right)
    {
       std:: cout << prev << ' ' << right << endl; 
    }
    else
        std::cout << 1 << ' ' << 1 << endl;
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
