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
int ec(string &s, int l, int r)
{
    while (l >= 0 && r < s.size() && s[l] == s[r])
    {
        l--;
        r++;
    }
    return r - l - 1; 
}
int sz(string &s)
{
    int st = 0, end = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        int oddL = ec(s, i, i);
        int evenL = ec(s, i, i + 1);
        int len = max(oddL, evenL);

        if (len > (end - st))
        {
            st = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return end - st + 1;
}
void solve()
{
    string a; 
    cin >> a; 
    int ans = sz(a);
    cout << ans << endl;  
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1; 
    while (tc--)
    {
        solve();
    }
    return 0;
}
