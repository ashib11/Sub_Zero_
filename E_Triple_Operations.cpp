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
int Mx = 2e5 + 10;
map<int, int> mp;

void preCal()
{
    mp[0] = 0;
    for (int i = 1; i <= Mx; ++i)
    {
        int j = i;
        while (j)
        {
            mp[i]++;
            j /= 3;
        }
    }
    for (int i = 1; i <= Mx; ++i)
    {
        mp[i] += mp[i - 1];
    }
}
void solve()
{
    int l, r;
    cin >> l >> r;
    int mn = 0;
    int tmp = l;
    while (tmp)
    {
        mn++;
        tmp /= 3;
    }
   
   
    cout << mp[r] - mp[l - 1] + mn << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    preCal();
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
