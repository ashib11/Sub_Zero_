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
// find_by_order();
// order_of_key();

void solve()
{
    int k, g, m;
    cin >> k >> g >> m;
    int Sg = 0, Sm = 0;
    while (k--)
    {
        if (Sg == g)
            Sg = 0;
        else if (Sm == 0)
            Sm = m;
        else if (Sm != 0)
        {
            int glasLabge = g - Sg;
            if (glasLabge >= Sm)
            {
                Sg += Sm;
                Sm = 0;
            }
            else
            {
                Sg += glasLabge;
                Sm = Sm - glasLabge;
            }
        }
        // cout << "m = " << Sm << " gl = " << Sg << endl;
    }
    cout << Sg << " " << Sm << endl;
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
