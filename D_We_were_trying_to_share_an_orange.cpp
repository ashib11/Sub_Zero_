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
int arr[10001];
void preCal()
{
    for (int i = 1; i <= 1000; ++i)
    {
        int cnt = 0;
        for (int j = 1; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                if (i / j == j)
                    cnt++;
                else
                    cnt += 2;
            }
        }
        arr[i] = cnt;
    }
    // for (int i = 1; i <= 1000; ++i)
    // {
    //     cout << arr[i] << endl;
    // }
}
void solve()
{
    preCal();
    int n;
    cin >> n;
    for (int i = 1; i < 1000; ++i)
    {
        if (arr[i] == n)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl; 
}
int main()
{
    fastIO();
    int tc;
    // cin >> tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}