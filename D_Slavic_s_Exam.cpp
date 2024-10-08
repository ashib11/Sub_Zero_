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

void solve()
{
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();

    int j = 0;
    for (int i = 0; i < n; ++i)
    {
        if (j < m and s[i] == t[j])
        {
            ++j;
            continue;
        }
        if (j >= m)
            break;
        if (s[i] == '?')
            s[i] = t[j++];
    }
    if (j >= m)
    {
        cout << "YES" << endl;
        for (auto it : s)
        {
            if (it == '?')
                cout << 'a';
            else
                cout << it;
        }
        cout << endl;
        return;
    }
    cout << "NO" << endl;
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
