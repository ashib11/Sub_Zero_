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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        --a[i];
        cout << a[i] << endl; 
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        --b[i];
    }
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        pos[b[i]] = i;
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = pos[a[i]];
    }
    int mx = -1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i] > mx)
        {
            mx = c[i];
        }
        else
        {
            ++ans;
        }
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
