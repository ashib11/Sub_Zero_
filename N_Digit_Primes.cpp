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
const int n =  1000000 + 2;
map<int, bool> mp;
vector<int> pre(n + 10);
bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isDigPrime(int n)
{
    string str = to_string(n);
    ll sum = 0;
    for (auto it : str)
    {
        sum += it - '0';
    }

    if (isPrime(sum))
    {
        return true;
    }
    return false;
}
void preCal()
{
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isPrime(i))
        {
            if (isDigPrime(i))
            {
                mp[i] = 1;
            }
        }
    }
    for (int i = 1; i < n; ++i)
        pre[i] = pre[i - 1] + mp[i];
}
void solve()
{
    int nq;
    cin >> nq;
    while (nq--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
}

int main()
{
    fastIO();
    int tc = 1;
    preCal();
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
