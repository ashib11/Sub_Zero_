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
    string a, b;
    cin >> a >> b;
    int rev_cnt = 0, st_cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[n - i - 1])
            rev_cnt++;
        if (a[i] != b[i])
            st_cnt++;
    }
    if(a==b){
        cout << 0 << endl; 
        return; 
    }
    if(rev_cnt==0){
        cout << 2 << endl; 
        return; 
    }
    // cout << st_cnt << " " << rev_cnt << endl;
    ll ans = st_cnt * 2;
    if (st_cnt % 2)
        ans--;
    ll ans1 = rev_cnt * 2;
    if (rev_cnt % 2 == 0)
        ans1--;
    cout << min(ans, ans1) << endl;
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
