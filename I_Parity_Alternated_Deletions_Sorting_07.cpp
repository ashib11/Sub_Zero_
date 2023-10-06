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
    vector<int> o, e;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x & 1)
            o.push_back(x);
        else
            e.push_back(x);
    }
    sort(all(o));
    sort(all(e));
    int x = o.size();
    int y = e.size();
    if ((abs(x - y)) > 1)
    {
        ll sum = 0;
        if (x > y)
        {
            for (int i = 0; i < (x - y) - 1; ++i)
                sum += o[i];
        }
        else
        {
            for (int i = 0; i < (y - x) - 1; ++i)
                sum += e[i];
        }
        cout << sum << endl;
    }
    else
        cout << 0 << endl;
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}