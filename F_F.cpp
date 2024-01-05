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
ll fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
void solve()
{
    int lage, nCar;
    cin >> lage >> nCar;
    ll ans = 0;
    for (int i = 0; i < nCar; ++i)
    {
        string str;
        cin >> str;
        vector<int> v(9.0);
        for (int i = 0; i < (int)str.size(); ++i)
        {
            if (str[i] == '0')
            {
                if (i == 0 || i == 1 || i == 2 || i == 3 || i == 53 || i == 52)
                    v[0]++;
                else if (i == 4 || i == 5 || i == 6 || i == 7 || i == 50 || i == 51)
                    v[1]++;
                else if (i == 8 || i == 9 || i == 10 || i == 11 || i == 49 || i == 48)
                    v[2]++;
                else if (i == 12 || i == 13 || i == 14 || i == 15 || i == 47 || i == 46)
                    v[3]++;
                else if (i == 16 || i == 17 || i == 18 || i == 19 || i == 45 || i == 44)
                    v[4]++;
                else if (i == 20 || i == 21 || i == 22 || i == 23 || i == 43 || i == 42)
                    v[5]++;
                else if (i == 24 || i == 25 || i == 26 || i == 27 || i == 41 || i == 40)
                    v[6]++;
                else if (i == 28 || i == 29 || i == 30 || i == 31 || i == 39 || i == 38)
                    v[7]++;
                else if (i == 32 || i == 33 || i == 34 || i == 35 || i == 37 || i == 36)
                    v[8]++;
            }
        }
        for (int i = 0; i < 9; ++i)
        {
            if (v[i] >= lage)
            {
                // cout << v[i] << " ";
                ans += fact(v[i]) / (fact(lage) * fact(v[i] - lage));
                // cout << fact(v[i]) / (fact(lage) * fact(v[i] - lage)) << endl;
            }
        }
        // cout << ans << endl;
    }
    cout << ans << endl;
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
