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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3
const int N = 2e4+23;
vector<bool> chck(N);
vector<ll> alPrime;
void seive()
{
    alPrime.push_back(2);
    for (ll i = 3; i * i <= N; i += 2)
    {
        if (chck[i] == false)
        {
            for (ll j = i * i; j <= N; j += (2 * i))
                chck[j] = true;
        }
    }
    for (ll i = 3; i <= N; i += 2)
    {
        if (chck[i] == false)
            alPrime.push_back(i);
    }
}

void solve()
{
    ll d;
    cin >> d;
    ll j;
    ll ans;
    for (int i = 0; i < alPrime.size(); ++i)
    {
        if (alPrime[i] >(d))
        {
            ll ans = alPrime[i];
            for (int j = i; j < alPrime.size(); ++j)
            {
                if (alPrime[j] >= (ans + d))
                {
                    cout << ans * alPrime[j] << endl;
                    return;
                }
            }
        }
    }
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    seive();
    while (tc--)
    {
        solve();
    }
    return 0;
}
