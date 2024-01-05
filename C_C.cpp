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
    vector<pair<int, string>> v;
    for (int i = 0; i < n; ++i)
    {
        string x;
        cin >> x;
        int val;
        cin >> val;
        v.push_back({val, x});
    }
    sort(allr(v));
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; ++i)
    {
        string tmp;
        cin >> tmp;
        bool f = false;
        for (auto it : v)
        {
            if (it.second.compare(0, tmp.size(), tmp) == 0)
            {
                cout << it.second << endl;
                f = true;
                break;
            }
        }
        if (!f)
            cout << "NO" << endl;
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
