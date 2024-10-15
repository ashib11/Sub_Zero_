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
    int n;
    cin >> n;
    vector<int> v(2 * n);
    int od = 0, ev = 0;
    vector<int> evn, odd;
    for (int i = 1; i <= (2 * n); ++i)
    {
        cin >> v[i - 1];
        if (v[i-1] % 2)
        {
            od++;
            odd.push_back(i);
        }
        else
        {
            ev++;
            evn.push_back(i);
        }
    }
    if (od % 2)
    {
        if (ev)
        {
            od -= 1;
            ev -= 1;
        }
        else
        {
            od -= 2;
        }
    }
    else
    {
        int val = min(ev, 2);
        ev -= val;
        val = 2 - val;
        od -= val;
    }
    for (int i = 0; i < ev; ++i)
    {
        cout << evn[i] << ' ';
        if (i % 2)
            cout << endl;
    }
    for (int i = 0; i < od; ++i)
    {
        cout << odd[i] << ' ';
        if (i % 2)
            cout << endl;
    }
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
