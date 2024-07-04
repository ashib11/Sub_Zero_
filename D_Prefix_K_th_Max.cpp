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
#define o_k order_of_key
#define f_o find_by_order
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    ordered_set<int> s;
    int y = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        int cnt = 0;
        int x;
        cin >> x;
        s.insert(x);
        if (i >= k)
        {
            cout << *s.f_o(s.size() - k) << endl;
        }
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}