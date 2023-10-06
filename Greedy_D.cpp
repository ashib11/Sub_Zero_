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
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x;
        v[i].first = x;
    }
    for (int i = 0; i < n; ++i)
    {
        int y;
        cin >> y;
        v[i].second = y;
    }
    int box;
    cin >> box;
    sort(v.begin(), v.end(), cmp);
    ll ans = -1;
    // for(auto it : v){
    //     cout << it.first << " " << it.second << endl; 
    // }
    for (int i = 0; i < n; ++i)
    {
        int k = box;
        ll sum = 0;
        for (int j = i; j < n; ++j)
        {

            if (k < v[j].first)
                {
                    
                }
            // cout << v[j].first << " " << v[j].second << endl;
            sum += v[j].first * v[j].second;
            // cout << sum << endl;
            k -= v[j].first;
        }
        // cout << sum << endl;
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}