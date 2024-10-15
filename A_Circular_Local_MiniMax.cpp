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
    vector<int> v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    if (n % 2)
    {
        cout << "NO" << endl;
        return;
    }
    sort(all(v));
    vector<int> ans(n + 2, 0);
    int st = 0, ed = (n/2);
    for (int i = 1; i <= n; i += 2)
    {
        ans[i] = v[st++], ans[i + 1] = v[ed++];
    }
    ans[0] = ans[n];
    ans[n + 1] = ans[1];
    for (int i = 1; i <= n; ++i)
    {
        if (ans[i] > ans[i - 1] and ans[i] > ans[i + 1])
            continue;
        else if (ans[i] < ans[i - 1] and ans[i] < ans[i + 1])
            continue;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; ++i)
    {
        cout << ans[i] << ' ';
    }
    cout << endl;
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