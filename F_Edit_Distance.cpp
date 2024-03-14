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
const int N = 5e3+10;
int dp[N][N];

int editDistance(string &s1, string &s2, int m, int n)
{
    if (n == 0)
        return m;
    if (m == 0)
        return n;
    int &yo = dp[m][n];
    if (~yo)
        return yo;
    if (s1[m - 1] == s2[n - 1])
        return yo = editDistance(s1, s2, m - 1, n - 1);
    else
    {
        int ins, del, rep;
        ins = editDistance(s1, s2, m, n - 1);
        del = editDistance(s1, s2, m - 1, n);
        rep = editDistance(s1, s2, m - 1, n - 1);
        return yo = 1 + min({ins, del, rep});
    }
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    memset(dp, -1, sizeof(dp)); 
    int m = s1.size();
    int n = s2.size();
    cout << editDistance(s1, s2, m, n) << endl;
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
