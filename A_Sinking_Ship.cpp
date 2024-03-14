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
    vector<string> v = {"rat", "woman", "man", "captain"};
    map<string, vector<string>> mp;
    int n;
    cin >> n;
    vector<string> hum;
    for (int i = 0; i < n; ++i)
    {
        string a, b;
        cin >> a >> b;
        if (b == "child" || b == "woman")
        {
            hum.push_back(a);
        }
        else
            mp[b].push_back(a);
    }
    bool ok = false;
    for (auto it : v)
    {
        if (it == "woman")
        {
            for (auto it : hum)
            {
                cout << it << endl;
            }
        }
        else
            for (auto x : mp[it])
            {
                cout << x << endl;
            }
    }

    cout << endl;
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