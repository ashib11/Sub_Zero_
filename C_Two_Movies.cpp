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
    vector<int> v(n), b(n);
    for (auto &i : v)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    ll m1 = 0, m2 = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != b[i])
        {
            if (v[i] > b[i])
            {
                m1+=v[i];
            }
            else
                m2+=b[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == b[i])
        {
            // 00 11 -1-1
            if (v[i] < 0)
            {
                if (m1 > m2)
                {
                    m1--;
                }
                else
                    m2--;
            }

            else
            {
                if (m1 > m2)
                {
                    m2 += v[i];
                }
                else
                    m1 += v[i];
            }
        }
    }
    cout << min(m1, m2) << endl;
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
