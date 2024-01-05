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
    string s;
    cin >> s;
    map<char, int> mp;
    for (auto it : s)
    {
        mp[it]++;
    }
    int cnt = 0;
    for (auto it : s)
    {
        if (it == '0' and mp['1'])
        {
            mp['1']--;
        }
        else if (it == '1' and mp['0'])
            mp['0']--;
        else
            break;
        cnt++;
    }
    cout << (int)s.size() - cnt << endl;
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
