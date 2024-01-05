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
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(all(v));
    vector<ll> prSum(n);
    prSum[0] = v[0].first;
    for (int i = 1; i < n; ++i)
    {
        prSum[i] = prSum[i - 1] + v[i].first;
    }
    vector<pair<ll, ll>> ans;
    int cnt = 1;
    for (int i = 0; i < n-1; ++i)
    {

        if (prSum[i] < v[i + 1].first)
        {
            ans.push_back({i, cnt});
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }
    ans.push_back({n - 1, cnt});
    vector<ll> balsal;
    for (auto it : ans)
    {
        for (int i = 0; i < it.second; ++i)
        {
            balsal.push_back(it.first);
        }
    }
    vector<ll> al(n);
    for (int i = 0; i < balsal.size(); ++i)
    {
        al[v[i].second] = balsal[i];
    }
    for (auto it : al)
        cout << it << " ";
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
