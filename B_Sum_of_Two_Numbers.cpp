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
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << ' ' << n / 2 << endl;
    }
    else
    {
        string a = "", b = "";
        string x = to_string(n);
        bool f = true;
        for (int i = 0; i < (int)x.size(); ++i)
        {
            int nm = (x[i] - '0');
            if (nm % 2)
            {
                int h = (nm + 1) / 2;
                int l = (nm - 1) / 2;
                if (f)
                {
                    a += to_string(h);
                    b += to_string(l);
                    f = false;
                }
                else
                {
                    b += to_string(h);
                    a += to_string(l);
                    f = true;
                }
            }
            else
            {
                int p = nm / 2;
                string y = to_string(p);
                a += y;
                b += y;
            }
        }
        int ans1 = stoi(a);
        int ans2 = stoi(b);
        cout << ans1 << " " << ans2 << endl;
    }
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
