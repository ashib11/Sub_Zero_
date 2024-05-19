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

void solve()
{
    string s, t;
    cin >> s >> t;
    if (t.size() > s.size())
        swap(s, t);
    int ns = s.size();
    int nt = t.size();
    bool f = false;
    ll g = gcd(ns, nt);
    string s1, t1;
    for (int i = 0; i < ns / g; ++i)
        t1 += t;
    for (int i = 0; i < nt / g; ++i)
        s1 += s;
    if (s1 == t1)
        cout << s1 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
