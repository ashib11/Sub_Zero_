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
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
    }
    int seg = n / 3;
    vector<vector<int>> ans(seg, vector<int>(3, 0));
   
    for (auto [a, b] : mp)
    {
        if (b > seg)
        {
            cout << "-1" << endl;
            return;
        }
        ll k = b;
        for (int i = 0; i < 3; ++i)
        {
            if (k <= 0)
                break;
            for (int j = 0; j < seg; ++j)
            {
                if (ans[j][i] == 0)
                {
                    ans[j][i] = a;
                    k--;
                }
                if (k <= 0)
                    break;
            }
        }
    }
    for (int i = 0; i < seg; ++i)
    {
        for (int j = 1; j < 3; ++j)
        {
            if (ans[i][j] % ans[i][j - 1])
            {
                cout << "-1" << endl;
                return;
            }
        }
    }
    for (auto it : ans)
    {
        for (auto yo : it)
        {
            cout << yo << ' ';
        }
        cout << endl;
    }
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
