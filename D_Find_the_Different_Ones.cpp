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
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    vector<int> suf(n); 
    suf[n - 1] = n;

    for (int i = n - 2; i >= 0; --i)
    {
        if (v[i] == v[i + 1])
        {
            suf[i] = suf[i + 1];
        }
        else
            suf[i] = i + 1;
    }
    for(auto it : suf)
        cout << it << ' ' ;
    cout << endl; 
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (suf[l - 1] > r - 1)
        {
            cout << -1 << ' ' << -1 << endl;
        }
        else
            cout << l << ' ' << suf[l - 1] + 1 << endl;
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
