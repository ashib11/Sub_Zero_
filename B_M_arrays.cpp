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
    map<int, int> mp;
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % k == 0)
        {
            cnt = 1;
            continue;
        }
        if (!mp[x])
        {
            v.push_back(x);
        }
        mp[x]++;
    }

    sort(allr(v));

    for (int i = 0; i < v.size(); ++i)
    {
        if (mp[v[i]])
        {

            cnt++;
            mp[v[i]]--;
            int rqr = k - (v[i] % k);
            mp[rqr] -= 2;
            mp[rqr] = max(0, mp[rqr]);
            if (mp[v[i]])
            {
                int a = mp[rqr];
                int b = mp[v[i]];
                int mn = min(a, b) + 1;
                mp[rqr] -= mn, mp[v[i]] -= mn;
                mp[rqr] = max(0, mp[rqr]), mp[v[i]] = max(0, mp[v[i]]);
                cnt += (mp[v[i]]);
            }
        }
    }
    cout << cnt << endl;
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
