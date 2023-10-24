#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int cnt = 0;
    if (v[x - 1])
        cnt = 1;
    int f = 1;
    for (int i = 0; i < (n); ++i)
    {
        if (x - 1 - f >= 0 && (x - 1 + f) < n)
        {
            if (v[x - 1 - f] && v[x - 1 + f])
            {
                cnt += 2;
            }
        }
        else if (x - 1 - f >= 0)
        {
            if (v[x - 1 - f])
            {
                cnt++;
            }
        }
        else if (x - 1 + f < n)
        {
            if (v[x - 1 + f])
            {
                cnt++;
            }
        }
        f++;
    }
    cout << cnt << endl;
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
