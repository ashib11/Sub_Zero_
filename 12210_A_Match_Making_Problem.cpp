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

int main()
{
    fastIO();
    int n_b, n_g;
    int tc = 1;
    while (cin >> n_b >> n_g && n_b && n_g)
    {
        vector<int> v(n_b);
        for (auto &i : v)
            cin >> i;
        sort(all(v));
        for (int i = 0; i < n_g; ++i)
        {
            int x;
            cin >> x;
        }
        int r = n_b - n_g;
        cout << "Case " << tc++ << ": ";
        if (r > 0)
        {
            cout << r << " " << v[0] << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
