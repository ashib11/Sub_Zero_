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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    int odd = 0;
    for (auto &i : v)
    {
        cin >> i;
        if (i % 2)
            odd++;
    }
    if (odd < k or odd % 2 != k % 2)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i)
    {
       
        if (v[i] % 2)
        {
            if (k <= 1)
                break;
            cout << i + 1 << ' ';
            --k;
            
        }
    }
    cout << n << endl;
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
