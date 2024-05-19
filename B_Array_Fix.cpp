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
int digtSum(int n)
{
    string str = to_string(n);
    ll sum = 0;
    for (auto it : str)
    {
        int x = it - '0';
        sum += x;
    }
    return sum;
}
int mxNumber(int n)
{
    string str = to_string(n);
    int mx = -1;
    for (auto it : str)
    {
        int x = it - '0';
        mx = max(mx, x);
    }
    return mx;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    bool chck = false;
    for (int i = n - 2; i >= 0; --i)
    {
        if (v[i + 1] >= v[i])
            continue;
        if (v[i] < 10)
        {
            cout << "NO" << endl;
            return;
        }
        int val = v[i] / 10;
        int dig = v[i] % 10;
        if (v[i + 1] >= dig and val <= dig)
            v[i] = val;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
