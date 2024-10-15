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
    int n, a, b;
    cin >> n >> a >> b;
    if (abs(a - b) > 1 or (a + b + 2) > n)
    {
        cout << "-1" << endl;
        return;
    }
    vector<int> v(n, 0);

    int cnt_a = 0, cnt_b = 0, st = 1, nd = n;
    map<int, bool> mp;
    for (int i = 1; i < n - 1; ++i)
    {

        if (a > b)
        {
            if (i % 2 and cnt_a < a)
            {
                mp[nd] = true;
                v[i] = nd--;
                cnt_a++;
            }
            else if (i % 2 == 0 and cnt_b < b)
            {
                mp[st] = true;
                v[i] = st++;
                cnt_b++;
            }
        }
        else if (b > a)
        {
            if (i % 2 == 0 and cnt_a < a)
            {
                mp[nd] = true;
                v[i] = nd--;
                cnt_a++;
            }
            else if (i % 2 and cnt_b < b)
            {
                mp[st] = true;
                v[i] = st++;
                cnt_b++;
            }
        }
        else
        {
            if (i % 2 == 0 and cnt_a < a)
            {
                mp[nd] = true;
                v[i] = nd--;
                cnt_a++;
            }
            else if (i % 2 and cnt_b < b)
            {
                mp[st] = true;
                v[i] = st++;
                cnt_b++;
            }
        }
    }
    int k = 1, k1 = n;

    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
        {
            if (a >= b)
            {
                while (mp[k1] == true and k1 > 0)
                    k1--;

                v[i] = k1;
                mp[k1] = true;
            }
            else
            {
                while (mp[k] == true and k <= n)
                    k++;

                v[i] = k;
                mp[k] = true;
            }
        }

        cout << v[i] << ' ';
    }
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
