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
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    ll cur_sum = 0;
    int op = 0;
    int k = 0;
    bool f = false; 
    for (int i = 0; i < n; ++i)
    {
        cur_sum += v[i];
        if(cur_sum==s) f =true; 
        if (cur_sum > s)
        {
            cur_sum -= v[k];
            op++;
            k++;
            if (k >= n)
                break;
        }
    }
    if(f) cout << op << endl; 
    else cout << "-1" << endl; 
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
