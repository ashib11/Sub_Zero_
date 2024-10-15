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
    return a.second > b.second;
    if (a.second == b.second)
        return a.first < b.first;
}
void solve()
{
    int n;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        cin >> a >> b;
        mp[a].push_back(b);
    }
    ll sum = 0;
    for (auto it : mp)
    {
        int lm = it.first;
        int lm2 = it.second.size();
        sort(allr(it.second));
        for (int i = 0; i < min(lm, lm2); ++i)
        {
            sum += it.second[i];
        }
    }
    cout << sum << endl;
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
