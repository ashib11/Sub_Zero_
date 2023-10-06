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

const int MOD = 1e9 + 7;
const int m = 32000;
vector<int> all_prime;
vector<bool> v(m, false);

void seive()
{
    all_prime.push_back(2);
    for (ll i = 4; i < m; i += 2)
        v[i] = true;
    for (ll i = 3; i < m; i += 2)
    {
        if (v[i] == false)
        {
            all_prime.push_back(i);
            for (ll j = i * i; j < m; j += (i + i))
                v[i] = true;
        }
    }
}

ll power(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    ll arr[all_prime.size() + 10] = {0};
    for (int i = 0; i < n; ++i)
    {
        ll num;
        cin >> num;
        for (int j = 0; j < all_prime.size(); ++j)
        {
            ll cnt = 0;
            if (num % all_prime[j] == 0)
            {
                while (num % all_prime[j] == 0)
                {
                    num /= all_prime[j];
                    cnt++;
                }
            }
            arr[all_prime[j]] = max(cnt, arr[all_prime[j]]);
        }
    }
    ll ans = 1;
    for (ll i = 0; i < all_prime.size(); ++i)
    {
        if (arr[i])
        {
            ans = (ans * power(all_prime[i], arr[i])) % MOD;
        }
    }
    cout << ans << endl;
}

int main()
{
    fastIO();
    seive();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
