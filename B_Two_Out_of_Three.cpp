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
const int N = 1e5;
int arr[N];
void solve()
{
    map<int, int> mp;
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        arr[i] = 1;
        mp[x]++;
        if (mp[x] == 2)
        {
            cnt++;
            cnt = min(cnt, 2);
            arr[i] = cnt+1;
        }
    }
    if (cnt == 2)
        for (int i = 1; i <= n; ++i)
            cout << arr[i] << " ";
    else cout << -1 ;
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
