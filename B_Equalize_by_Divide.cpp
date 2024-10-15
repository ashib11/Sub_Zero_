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
    vector<pair<ll, ll>> vp(n);
    set<ll> st;
    for (int i = 0; i < n; ++i)
    {
        cin >> vp[i].first;
        vp[i].second = i + 1;
        st.insert(vp[i].first);
    }

    if (st.size() == 1)
    {
        cout << "0" << endl;
        return;
    }
    auto it = *st.begin();
    if (it == 1)
    {
        cout << "-1" << endl;
        return;
    }
    vector<pair<ll, ll>> ans;
    sort(allr(vp));
    ll mn = vp[n - 1].first;
    ll indx = vp[n - 1].second;
    for (int i = 0; i < 30; ++i)
    {
        ll tmp = mn;
        ll indx1 = indx;
        for (int j = 0; j < n; ++j)
        {
            if (vp[j].first > tmp)
            {
                ans.push_back({vp[j].second, indx1});
                ll val = vp[j].first / tmp;
                if (vp[j].first % tmp)
                    val++;
                vp[j].first = val;
                if (mn > vp[j].first)
                {
                    mn = vp[j].first;
                    indx = vp[j].second;
                }
            }
        }
    }

    cout << ans.size() << endl;
    for (auto it : ans)
    {
        cout << it.first << ' ' << it.second << endl;
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
