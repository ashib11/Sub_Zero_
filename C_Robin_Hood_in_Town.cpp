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
bool valid(ll k, ll chck, double total, ll n)
{

    total += k;
    double avg = total / n;
    avg /= 2;
    
    if (avg > chck)
    {
        return true;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    if (n <= 2)
    {
        cout << "-1" << endl;
        return;
    }
    sort(all(v));
    double sum = 0;
    for (auto it : v)
    {
        sum += it;
    }
    ll mn = v[n / 2];
    ll l = 0, h = 1e13;
    ll ans =-1; 
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        if (valid(mid, mn, sum, n))
        {
            ans = mid; 
            h = mid - 1;
        }
        else
            l = mid + 1;
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
