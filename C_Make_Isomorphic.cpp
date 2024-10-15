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
    int m;
    cin >> m;
    vector<vector<int>> v(n+1, vector<int>(m+1));
    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    vector<vector<int>> v1(n+1, vector<int>(m+1));
    int mx;
    cin >> mx;
    for (int i = 0; i < mx; ++i)
    {
        int a, b;
        cin >> a >> b;
        v1[a].push_back(b);
    }
    for(int i=1; i <= n; ++i){
            
    }
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
