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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n,0);
    for (auto &i : v)
        cin >> i;
    vector<ll> pre(n+1, 0);

    pre[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    int nq;
    cin >> nq;
    ll cnt = 0;
    while (nq--)
    {
        int a, b;
        cin >> a >> b;

        ll val = pre[b] - pre[a - 1];
        if (isPrime(val))
        {
            cnt++;
        }
    }
    if (cnt == 1)
    {
        cout << "Sokina Khatun will be very happy!" << endl;
    }
    else if (cnt == 2)
    {
        cout << "Sokina Khatun will be very very happy!" << endl;
    }
    else if (cnt >= 3)
    {
        cout << "Sokina Khatun will be very very very happy!" << endl;
    }
    else
        cout << "Adnan bhai, Priyom dada, Shuvo bhai will forever be single!" << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
