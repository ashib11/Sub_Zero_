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
    vector<ll> v(n);
    vector<ll> od, ev;
    for (auto &i : v)
    {
        cin >> i;
        if (i % 2 == 1)
            od.push_back(i);
        else
            ev.push_back(i);
    }
    if (od.size() == n || ev.size() == n)
    {
        cout << "YES" << endl;
        return;
    }
    int mnOd = INT_MAX, mnEv = 0;
    if (od.size() > 0)
        mnOd = *min_element(all(od));
    if (ev.size() > 0)
        mnEv = *min_element(all(ev));
    if (mnOd < mnEv)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
