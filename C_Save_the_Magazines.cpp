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
    int cnt = 0;
    string str;
    cin >> str;
    ll sum = 0;
    map<int, int> mp;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = n - 1; i >= 0; --i)
    {
        int x = v[i];
        if (str[i] == '1')
        {
            sum += x;
            mp[x] = 1;
        }
        else
        {
            if (!mp.empty())
            {
                auto it = mp.begin();
                int val = it->first;
                if (val < x)
                {
                    sum -= val;
                    sum += x;
                }
               
            }
            mp.clear(); 
        }
    }
    cout << sum << endl;
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