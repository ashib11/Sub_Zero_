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
    string str;
    cin >> str;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '0')
            v.push_back(i);
    }
    ll cnt = 0, lst = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (str[i] == '0')
        {
            cout << cnt + lst << " ";
            lst += cnt;
        }
        else
            cnt++;
    }
    for (int i = 0; i < cnt; ++i)
        cout << -1 << " ";
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