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
string str;
int n;
bool chck(int mid)
{
    int mx = 0;
    int hyp = 0;
    int cur = 0;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == ' ')
        {
            mx = max(mx, cur);
            cur = 0;
            hyp = 0;
        }
        else if (hyp >= 2)
        {
            mx = max(mx, cur);
            cur = 0;
            hyp = 0;
        }
        cur++;
    }
    mx = max(cur, mx);
    cout << mx << endl;
    return mx >= mid;
}
void solve()
{
    cin >> n;
    cin.ignore();
    getline(cin, str);
    cout << str << endl; 
    ll l = 1, h = n;
    while (h >= l)
    {
        int mid = (l + h) / 2;
        if (chck(mid))
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << l << ' ' << h << endl;
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
