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
    int n, k, p;
    cin >> n >> k >> p;
    vector<pair<vector<int>, int>> v(n);

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        vector<int> value(k);
        for (int j = 0; j < k; ++j)
        {
            cin >> value[j];
        }

        v[i] = make_pair(value, x);
    }
    sort(all(v));

    vector<vector<int>> cumulative_sum(n, vector<int>(k, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < k; ++j)
        {
            cumulative_sum[i][j] = v[i].first[j];
            if (i > 0)
            {
                cumulative_sum[i][j] += cumulative_sum[i - 1][j];
            }
        }
    }
      for (int i = 0; i < n; ++i)
    {
        cout << v[i].second << " ";
        for (int j = 0; j < k; ++j)
        {
            cout << cumulative_sum[i][j] << " ";
        }
        cout << endl;
    }
    int index = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (cumulative_sum[i][k - 1] >= p)
            {
                index = i;
                break;
            }
        }
    }

    if (index != -1)
    {
        cout << index + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}
