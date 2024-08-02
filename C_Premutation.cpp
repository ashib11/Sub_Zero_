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
    vector<int> v[n];
    map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
            if (j == 1)
            {
                mp[x]++;
            }
        }
    }
    int f ;
    for (auto [a, b] : mp)
    {
        if (b == n - 1)
        {
            f = a; 
            cout << a << ' ';
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (f != v[i][0])
        {
            for (int j = 0; j < n-1; ++j)
            {
                cout << v[i][j] << ' ';
            }
            break;
        }
    }
    cout << endl;
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
