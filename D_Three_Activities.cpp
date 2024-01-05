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
    vector<pair<ll, ll>> ski, mov, bord;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        ski.push_back({x, i + 1});
    }
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        mov.push_back({x, i + 1});
    }
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        bord.push_back({x, i + 1});
    }
    sort(allr(mov));
    sort(allr(ski)), sort(allr(bord));
    ll sum = 0;
    ll ans = -1;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (mov[j].second != ski[i].second)
                for (int k = 0; k < 3; ++k)
                {
                    if (bord[k].second != mov[j].second and bord[k].second != ski[i].second){
                        ll sum1 = bord[k].first + ski[i].first + mov[j].first ; 
                        ans = max(ans, sum1); 
                    }
                }
        }
    }
    cout << ans << endl;
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
