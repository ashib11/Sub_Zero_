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
    vector<int> v(4);
    for (auto &i : v)
        cin >> i;
    bool deg = false, good = false;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (j != i)
                for (int k = 0; k < 4; ++k)
                {
                    if (k != i and k != j)
                    {
                        if (v[i] + v[j] > v[k] and v[i] + v[k] > v[j] and v[j] + v[k] > v[i])
                        {
                            good = true;
                        }
                        else if (v[i] + v[k] == v[j] or v[i] + v[j] == v[k] or v[k] + v[j] == v[i])
                        {
                            deg = true;
                        }
                    }
                }
        }
    }
    if (good)
    {
        cout << "TRIANGLE" << endl;
    }
    else if (deg)
    {
        cout << "SEGMENT" << endl;
    }
    else
        cout << "IMPOSSIBLE" << endl;
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
