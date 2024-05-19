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
    string str;
    cin >> str;
    int ans = 1e8;
    for (int i = 0; i < n; ++i)
    {
        int a = 0, b = 0, c = 0;
        for (int j = i; j <= min(i + 6, n - 1); ++j)
        {
            a += str[j] == 'a';
            b += str[j] == 'b';
            c += str[j] == 'c';
            if (a > b and a > c and a + b + c > 1)
                ans = min(ans, a + b + c);
        }
    }
    if(ans == 1e8)
        cout << -1 << endl; 
    else cout << ans << endl; 
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
