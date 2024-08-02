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
    vector<char> v, v1;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        // 0 1 2 3 4 5 6 7
        // 0 1 0 1 0 1 0 1
        if (i % 2)
            v1.push_back(str[i]);
        else
            v.push_back(str[i]);
    }
    sort(all(v)), sort(all(v1));
    string ans = "";
    int od = 0, ev = 0;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (i % 2)
        {
            ans += v1[od++];
        }
        else
            ans += v[ev++];
    }
    if (k % 2 == 0)
    {
        sort(all(str));
        cout << str << endl;
        return;
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
