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
    int n;
    cin >> n;
    if (n == 0)
        cout << 10 << endl;
    if (n == 1)
        cout << 10 << endl;
    if (n == 2)
        cout << 8 << endl;
    if (n == 3)
        cout << 9 << endl;
    if (n == 4)
        cout << 8 << endl;
    if (n == 5)
        cout << 7 << endl;
    if (n == 6)
        cout << 7 << endl;
    if (n == 7)
        cout << 7 << endl;
    if (n == 8)
        cout << 7 << endl;
    if (n == 9)
        cout << 0 << endl;
    if (n == 10)
        cout << 9 << endl;
    if (n == 11)
        cout << 6 << endl;
    if (n == 12)
        cout << 8 << endl;
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
