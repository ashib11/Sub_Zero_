#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    int od = 0, ev = 0;
    vector<ll> odd, evn;

    for (auto &i : v)
    {
        cin >> i;
        if (i % 2)
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

    if (od == 0 || ev == 0)
    {
        cout << 0 << endl;
        return;
    }

    sort(all(odd)), sort(all(evn));

    ll ans = 0;
    ll val = odd.back();
    int indx = -1;
    for (int i = 0; i < (int)evn.size(); ++i)
    {
        if (val > evn[i])
        {
            ans++;
            val += evn[i];
        }
        else
        {
            indx = i;
            break;
        }
    }
    if (indx == -1)
    {
        cout << ans << endl;
        return;
    }
    for (int i = indx; i < (int)evn.size(); ++i)
    {
        if (evn[i] % 2 == 0)
            ans++;
    }
    cout << ans + 1 << endl;
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
