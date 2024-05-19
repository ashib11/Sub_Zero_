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

map<ll, bool> mp;
void Precal()
{
    mp[1] = true, mp[10] = true, mp[11] = true, mp[100] = true, mp[101] = true, mp[110] = true, mp[111] = true, mp[121] = true, mp[1000] = true, mp[1001] = true, mp[1010] = true, mp[1011] = true, mp[1100] = true, mp[1101] = true, mp[1110] = true, mp[1111] = true, mp[1210] = true, mp[1221] = true, mp[1331] = true, mp[10000] = true, mp[10001] = true, mp[10010] = true, mp[10011] = true, mp[10100] = true, mp[10101] = true, mp[10110] = true, mp[10111] = true, mp[10201] = true, mp[11000] = true, mp[11001] = true, mp[11010] = true, mp[11011] = true, mp[11100] = true, mp[11101] = true, mp[11110] = true, mp[11111] = true, mp[11121] = true, mp[11211] = true, mp[12100] = true, mp[12111] = true, mp[12210] = true, mp[12221] = true, mp[12321] = true, mp[13310] = true, mp[13431] = true, mp[14641] = true, mp[100000] = true;
}
void solve()
{
    int n;
    cin >> n;
    if (mp[n])
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
    Precal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
