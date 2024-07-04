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
void yo(vector<int> &v)
{
    int n = v.size();
    int suma = 0, sumb = 0;
    for (int mask = 0; mask < (1 << n); ++mask)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (mask & (1 << i))
            {
                sum += v[i];
            }
            else
                sum -= v[i];
        }

        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return; 
        }
    }
    cout << "NO" << endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    yo(v);
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
