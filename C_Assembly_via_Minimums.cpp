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
    int n;
    cin >> n;
    int lm = ((n * (n - 1)) / 2);
    for (int i = 0; i < lm; ++i)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ans;
    int mx = n - 1;
    for (auto [a, b] : mp)
    {
        while (b > 0)
        {
            ans.push_back(a);
            b -= mx;
            mx--;
        }
    }
    while (ans.size() != n)
    {
        ans.push_back(ans.back());
    }
    for (auto it : ans)
    {
        cout << it << ' ';
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
