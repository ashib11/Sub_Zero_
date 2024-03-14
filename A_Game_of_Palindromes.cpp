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
bool isPal(string str)
{
    int sz = str.size();
    for (int i = 0; i <= sz / 2; ++i)
    {
        if (str[i] != str[sz - i - 1])
            return false;
    }
    return true;
}
void solve()
{
    string str;
    cin >> str;
    int cnt = 0;
    int n = str.size();
    for (int i = 0; i < (int)str.size(); ++i)
    {
        string tmp = "";
        for (int j = i; j < (int)str.size(); ++j)
        {
            tmp += str[j];
            if (isPal(tmp))
                cnt++;
        }
    }
    double t = (n * (n + 1)) / 2;
    double ans = cnt / t;
    cout << fixed << setprecision(3) << ans << endl;
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
