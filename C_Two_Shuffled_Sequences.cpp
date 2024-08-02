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
    vector<int> v(n);
    map<int, int> mp;
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
    }
    for (auto [a, b] : mp)
    {
        if (b > 2)
        {
            cout << "NO" << endl;
            return;
        }
    }

    sort(all(v));
    vector<int> a, b;
    a.push_back(v[0]);
    for (int i = 1; i < n; ++i)
    {
        if (v[i] == v[i - 1])
        {
            b.push_back(v[i]);
        }
        else
            a.push_back(v[i]);
    }
    sort(all(a));
    sort(allr(b));
    cout << "YES" << endl;
    cout << a.size() << endl; 
    for (auto it : a)
    {
        cout << it << ' ';
    }
    cout << endl;
    cout << b.size() << endl; 
    for (auto it : b)
    {
        cout << it << ' ';
    }
    cout << endl;
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
