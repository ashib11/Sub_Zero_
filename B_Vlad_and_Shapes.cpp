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
    vector<string> v(n);
    vector<int> cnt(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        int cnt1 = 0, cnt2 = 0;
        for (auto it : v[i])
        {
            if (it == '1')
                cnt1++;

        }
        for (auto it : v[i + 1])
        {
            if (it == '1')
                cnt2++;
        }
        if (cnt1 != cnt2 and cnt1>0 and cnt2 >0)
        {
            // cout << cnt1 << " " << cnt2 << i << " " << i + 1 << endl;
            cout << "TRIANGLE" << endl;
            return;
        }
    }
    cout << "SQUARE" << endl;
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
