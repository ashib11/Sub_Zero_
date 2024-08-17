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

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    string tmp = "";
    if (2 * k >= n)
    {
        cout << "NO" << endl;
        return;
    }
    if (k == 0)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < k; ++i)
        tmp += str[i];
    for (int i = n - k; i < n; ++i)
    {
        tmp += str[i];
    }
    if (tmp.size())
    {
        for (int i = 0; i < (int)tmp.size() / 2; ++i)
        {
            if (tmp[i] != tmp[(int)tmp.size() - i - 1])
            {
                cout << "NO" << endl;
                return;
            }
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
