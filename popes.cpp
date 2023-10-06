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
// find_by_key();
// value_by_key();
const int N = 1e5 + 10;
int main()
{
    fastIO();
    int p;
    while (cin >> p)
    {
        int y;
        cin >> y;
        vector<int> yrs(y);
        for (auto &i : yrs)
            cin >> i;
        int ans = -1;
        int sYear, eYear;
        for (int i = 0; i < y; ++i)
        {
            int indx = (lower_bound(yrs.begin() + i, yrs.end(), yrs[i] + p) - yrs.begin());
            int x = indx - i;
            if (x > ans)
            {
                sYear = yrs[i];
                eYear = yrs[indx - 1];
                ans = x;
            }
        }
        cout << ans << " " << sYear << " " << eYear << endl;
    }

    return 0;
}
