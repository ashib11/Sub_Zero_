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
const int N = 2e5 + 1;
vector<int> v(N);
void precal()
{
    for (int i = 1; i <= N; ++i)
    {
        int x = i;
        ll val = 0;
        while (x)
        {
            val += x % 10;
            x /= 10;
        }
        v[i] = v[i - 1] + val;
    }
}
void solve()
{
    int n;
    cin >> n;
    cout << v[n] << endl;
}

int main()
{
    fastIO();
    precal();
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
