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
}
int main()
{
    fastIO();
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
            cin >> v[i];
        set<ll> ans;
        ans.insert(v[n - 1]);
        ll cnt = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            auto x = ans.lower_bound(v[i]);

            cout << *x << endl;
            cnt += *x;
            ans.insert(v[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}