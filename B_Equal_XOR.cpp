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
    vector<int> v(2 * n);
    map<int, int> l, r;
    for (int i = 0; i < 2 * n; ++i)
    {
        cin >> v[i];
        if (i < n)
            l[v[i]]++;
        else
            r[v[i]]++;
    }
    vector<int> lft, rgt;
    for (int i = 1; i <= n; ++i)
    {
        if (l[i] == 2)
        {
            lft.push_back(i);
            lft.push_back(i);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (r[i] == 2)
        {
            rgt.push_back(i);
            rgt.push_back(i);
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        if (lft.size() < 2 * k)
        {
            if (l[i] == 1)
                lft.push_back(i);
        }
        else
            break;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (rgt.size() < 2 * k)
        {
            if (r[i] == 1)
                rgt.push_back(i);
        }

        else
            break;
    }
    for (int i = 0; i < 2 * k; ++i)
    {
        cout << lft[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 2 * k; ++i)
        cout << rgt[i] << ' ';
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
