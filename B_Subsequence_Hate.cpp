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
    string str;
    cin >> str;
    int z = 0, o = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == '0')
            z++;
        if (str[i] == '1')
            o++;
    }
    // cout << z << " " << o << endl;
    if (z == 0 or o == 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = 1e8;
    int cnt = 0;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (str[i] == '1')
        {
            o--;
        }
        else
            cnt++;
        ans = min(ans, cnt + o);
    }
    cout << ans << endl; 
    cnt = 0;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (str[i] == '0')
        {
            z--;
        }
        else
            cnt++;
        cout << ans << ' ' << cnt << ' ' << cnt+z << endl;  
        ans = min(ans, cnt + z);
    }
    cout << ans << endl; 
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
