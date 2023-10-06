#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;

    ll m_sum = 0;
    ll mx_sum = 0;
    for (ll i = 1; i <= k; ++i)
    {
        m_sum += i;
    }
    for (ll i = n; i >= (n - k + 1); --i)
    {
        mx_sum += i;
    }
    if (x >= m_sum && x <= mx_sum)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
