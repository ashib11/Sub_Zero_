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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    map<ll, ll> mp;
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
    }
    vector<ll> fre;
    ll ans = 0;
    for (auto it : mp)
    {
        fre.push_back(it.second);
    }
    sort(all(fre));

    int i;
    for (i = fre.size() - 1; i >= 0; --i)
    {
        if (fre[i] >= k)
        {
            fre[i] = 0;
            if (i - 1 >= 0)
                fre[i - 1] += (k - 1);
            else if (i == 0)
                ans = k - 1;
        }
        else
        {
            while (i >= 0)
            {
                ans += fre[i];
                --i;
            }
            break; 
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
