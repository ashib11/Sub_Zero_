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
    int n;
    cin >> n;
    string gg;
    cin >> gg;
    string gb;
    cin >> gb;
    int l;
    cin >> l;
    int nq;
    cin >> nq;
    for (int i = 0; i < nq; ++i)
    {
        string x, y;
        cin >> x >> y;
        bool check1 = false, check2 = false;
        for (int i = 0; i <=l-n; ++i)
        {

            if (x.substr(i, n) == gg)
            {
                check1 = true;
                if (y == gb)
                    check2 = true;
            }
        }
        if (check1 + check2 == 2)
            cout << "Guilty" << endl;
        else if (check1 + check2 == 1)
            cout << "Suspected" << endl;
        else
            cout << "Not guilty" << endl;
       
    }
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
