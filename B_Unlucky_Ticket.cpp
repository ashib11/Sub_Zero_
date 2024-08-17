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
    string str;
    cin >> str;
    vector<int> a, b;
    for (int i = 0; i < 2 * n; ++i)
    {
        if (i < n)
        {
            a.push_back(str[i] - '0');
        }
        else
            b.push_back(str[i] - '0');
    }
    sort(all(a)), sort(all(b));
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > b[i])
            cnt++;
        else if (b[i] > a[i])
            cnt--;
    }
    if (abs(cnt) == n)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
