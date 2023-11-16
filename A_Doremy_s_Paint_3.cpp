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
// find_by_order();
// order_of_key();
void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        mp[x]++;
        s.insert(x);
    }
    if (s.size() > 2)
    {
        cout << "No" << endl;
        return;
    }
    vector<int> ans;
    for (auto it : s)
        ans.push_back(mp[it]);
    int x = abs(ans[0] - ans[1]);
    if (s.size() == 1)
        cout << "Yes" << endl;
    else if (n % 2 == 0 and x <= 1)
        cout << "Yes" << endl;
    else if (n % 2 and ans.size() == 2 and x <= 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
