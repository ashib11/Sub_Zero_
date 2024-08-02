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
    priority_queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        q.push(i);
    }
    cout << 2 << endl; 
    for (int i = 1; i < n; ++i)
    {
        ll b = q.top();
        q.pop();
        ll a = q.top();
        q.pop(); 
        ll k = ((a + b) + 1) / 2;
        cout << a << ' ' << b << endl;
        q.push(k);
    }
    // cout << q.top() << ' ' << q.size() << endl; 
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
