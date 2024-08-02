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
    vector<vector<ll>> v(3, vector<ll>(n));
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> v[i][j];
    }
    ll tsum = accumulate(all(v[0]), 0);
    ll mn = (tsum + 2) / 3;
    // cout << mn << endl;
    vector<int> tmp = {0, 1, 2};
    do
    {
        vector<pair<ll, pair<ll, ll>>> ans;
        ll cur = 0;
        int l = 0;
        int indx = 0;

        for (int i = 0; i < n; ++i)
        {
            cur += v[tmp[indx]][i];
            if (cur >= mn)
            {
                ans.push_back({tmp[indx], {l, i}});
                indx++;
                cur = 0;
                l = i + 1;
                if (indx == 3)
                    break;
            }
        }
        if (indx == 3)
        {
            sort(all(ans));
            for (auto it : ans)
            {
                cout  << it.second.first + 1 << ' ' << it.second.second + 1 << ' ';
            }
            cout << endl;
            return;
        }
    } while (next_permutation(all(tmp)));
    cout << -1 << endl;
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
