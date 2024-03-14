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
// find_by_order();
// order_of_key();
const int N = 1e8 + 2;
vector<ll> alPrime;
vector<bool> isPrime(N, true);
void seive()
{
    alPrime.push_back(2);
    for (ll i = 3; i * i < N; i += 2)
    {
        if (isPrime[i])
        {
            alPrime.push_back(i);

            for (ll j = i * i; j < N; j += (i + i))
                isPrime[j] = false;
        }
    }
}
void solve()
{
    ll n;
    while (1)
    {
        cin >> n;
        if (!n)
            return;
        if (n < 5)
            cout << n << " is not the sum of the two primes" << endl;
        else if (!(n % 2))
        {
            if (isPrime[n - 2])
                cout << n << " is the sum of 2 and " << n - 2 << endl;
            else
                cout << n << " is not the sum of the two primes" << endl;
        }
        else {

            for(ll i = n/2; i < n; ++i){
                if(isPrime[(num/2)-x])
            }
        }
    }
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    seive();
    while (tc--)
    {
        solve();
    }
    return 0;
}
