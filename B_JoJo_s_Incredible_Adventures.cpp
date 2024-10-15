#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    string str;
    cin >> str;
    int n = str.size();
    int on = 0, of = 0;
    for (auto it : str)
    {
        if (it == '0')
            of++;
        else
            on++;
    }
    if (of == n)
    {
        cout << 0 << endl;
    }
    else if (on == n)
    {
        ll ans = 1ll * n * n;
        cout << ans << endl;
    }
    else
    {
        str += str;
        ll cur = str[0] == '1';
        ll mx = 0;
        for (int i = 1; i < (int)str.size(); ++i)
        {
            if (str[i - 1] == '1' and str[i] == str[i - 1])
            {
                cur++;
            }
            else
            {
                cur = 1;
            }
            mx = max(cur, mx);
        }
        mx = max(cur, mx);
        ll ans = 0;
        for (int i = 1; i <= mx; ++i)
        {
            ll yo = ((mx + 1 - i) * i * 1ll);
            ans = max(ans, yo);
        }
        cout << ans << endl;
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
