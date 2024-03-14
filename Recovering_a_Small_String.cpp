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
    map<int, char> mp;
    char x = 'a';
    for (int i = 1; i <= 26; ++i)
    {
        mp[i] = x;
        x++;
    }
    for (int i = 1; i <= 26; ++i)
    {
        for (int j = 1; j <= 26; ++j)
        {
            for (int k = 1; k <= 26; ++k)
            {
                if (i + j + k == n)
                {
                    cout << mp[i] << mp[j] << mp[k] << endl;
                    return;
                }
            }
        }
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
