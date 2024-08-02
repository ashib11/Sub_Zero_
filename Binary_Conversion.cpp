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
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;
    int cnt = 0, cnt2 = 0, tcnt = 0, tcnt2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
            cnt++;
        if (s[i] == '1')
            cnt2++;
        if (t[i] == '0')
            tcnt++;
        if (t[i] == '1')
            tcnt2++;
    }
    if (cnt != tcnt or cnt2 != tcnt2)
    {
        // cout << cnt << ' ' << tcnt << ' ' << cnt2 << ' ' << tcnt2 << endl;
        cout << "NO" << endl;
        return;
    }
    int mis = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != t[i])
            mis++;
    }
    cout << mis << endl;
    if (mis <= k)
    {
        if (mis % 2 != k % 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            
        }
    }
    else
    {
        cout << "NO" << endl;
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
