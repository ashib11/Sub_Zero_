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
    if (n % 2 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> a, b;
    a.push_back(1), b.push_back(2);
    for (int i = 3; i <= 2 * n; i += 2)
    {
        if (b.back() > a.back())
        {
            a.push_back(i + 1);
            b.push_back(i);
        }
        else
            a.push_back(i), b.push_back(i + 1);
    }
    for (auto it : a)
    {
        cout << it << ' ';
    }
    for (auto it : b)
    {
        cout << it << ' ';
    }
    cout << endl;
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
