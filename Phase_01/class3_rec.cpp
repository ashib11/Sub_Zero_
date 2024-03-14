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
int memo[100];
int power_of_two(int n)
{
    if (n == 0)
        return 1;
    if (memo[n] != -1)
        return memo[n];

    memo[n] = power_of_two(n - 1) + power_of_two(n - 1);
    return memo[n];
}
void solve()
{
    int n = 5;
    memset(memo, -1, sizeof(memo));
    cout << power_of_two(n) << endl;
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
