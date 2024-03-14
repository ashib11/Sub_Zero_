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
bool cmp(const string& a, const string& b) {
    return a.size() < b.size();
}

void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    int mx = -1;
    for (auto &i : v)
    {
        cin >> i;
        mx = max(mx, (int)i.size());
    }

    sort(all(v), cmp);

    int cnt = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i + 1].find(v[i]) != string::npos)
        {
            cnt++;
        }
    }

    if (cnt == n - 1)
    {
        cout << "YES" << endl;
        for (auto it : v)
        {
            cout << it << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
        // for (auto it : ans)
        // {
        //     cout << it << endl;
        // }
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