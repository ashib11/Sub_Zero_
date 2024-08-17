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
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if ((a[i] == '0' and b[i] == '1') or a[i] == '1' and b[i] == '0')
        {

            ans += 2;
        }
        else if (a[i] == '0' and b[i] == '0')
        {
            if (i < n and a[i + 1] == '1' and b[i + 1] == '1')
            {

                ans += 2;
                i++;
            }
            else
                ans++;
        }
        else if (a[i] == '1' and b[i] == '1')
        {
            if (i < n and a[i + 1] == '0' or b[i + 1] == '0')
            {
                ans += 2;
                i++;
            }
        }
        else if (a[i] == '0' or b[i] == '0')
        {

            ans++;
        }
    }
    std::cout << ans << endl;
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
