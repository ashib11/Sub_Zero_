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
    map<int, int> mp;
    vector<int> v(n);
    bool f = false;
    for (auto &i : v)
    {
        cin >> i;
        mp[i]++;
        if (i > 1)
            f = true;
    }
    if (mp[0] <= (n+1) / 2)
    {
        cout << 0 << endl;
    }
   else  if( f or mp[0]==n){
        cout << 1 << endl; 
    }
    else cout << 2 << endl; 
    // 1 1 2 0 0 0 0 0
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
