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
        cin >> i;
    string str;
    cin >> str;
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    vector<int> L, R;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (str[i] == 'L')
            L.push_back(i + 1);
        else
            R.push_back(i + 1);
    }
    sort(allr(R));
    ll ans = 0;
    int j = 0;
    for (int i = 0; i < (int)L.size(); ++i)
    {
        if (j < R.size())
        {
            if (L[i] < R[j])
            {
                ans += pre[R[j++]] - pre[L[i] - 1];
               
            }
        }
    }
    cout << ans << endl;
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
