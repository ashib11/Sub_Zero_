#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define TEMPLATE template <typename T>
#define endl "\n"
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool chck(double mid, vector<int> &v, int vol, vector<int> &b)
{
    double t = 0;
    for (int i = 0; i < (int)v.size(); ++i)
    {
        t += mid * v[i];
    }
    return t <= vol and mid <= b[0];
}
void solve()
{
    int n, vol;
    cin >> n >> vol;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    vector<int> b(n);
    for (auto &i : b)
    {
        cin >> i;
    }
    sort(all(b));
    double l = 0, h = b[n - 1];
    while (h - l > 0.0001)
    {
        double mid = (l + h) / 2;
        if (chck(mid, v, vol, b))
        {
            l = mid ;
        }
        else
        {
            h = mid ;
        }
    }
    double ans = 0;
    for (int i = 0; i < n; ++i)
        ans += (h * v[i]);

    cout << fixed << setprecision(6) << min(ans, vol*1.0)  << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve();
    }
    return 0;
}
