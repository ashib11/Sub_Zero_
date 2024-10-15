#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    ll od_sum = 0, ev_sum = 0, od_neg = 0, ev_neg = 0;
    bool f = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (i % 2==0)
        {
            if (v[i] >= 0)
            {
                ev_sum += v[i];
                f = true;
            }
            else
                ev_neg += v[i];
        }
        else
        {
            if (v[i] >= 0)
            {
                f = true;
                od_sum += v[i];
            }
            else
                od_sum += v[i];
        }
    }
    if (f)
    {
        cout << max(od_sum, ev_sum) << endl;
    }
    else if (od_neg < 0 and ev_neg < 0)
    {
        cout << min(od_neg, ev_neg) << endl;
    }
    else if (od_neg < 0)
    {
        cout << od_neg << endl;
    }
    else
    {
        cout << ev_neg << endl;
    }
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}