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
map<string, int> mp;
void precal()
{
    int cnt = 1;
    for (char i = 'a'; i <= 'z'; ++i)
    {
        for (char j = 'a'; j <= 'z'; ++j)
        {
            if (i != j)
            {
                string x = "";
                x += i, x += j;
                mp[x] = cnt++;
            }
        }
    }
}
void solve()
{
    string str;
    cin >> str;
    cout << mp[str] << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    precal();
    while (tc--)
    {
        solve();
    }
    return 0;
}
