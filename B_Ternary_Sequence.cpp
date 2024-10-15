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
    int a, b, c, a1, b1, c1;
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    ll yo = min(c, b1);
    c -= yo;
    b1 -= yo;
    ll ans = (yo * 2);
    yo = min(a, c1); 
    a -= yo;
    c1 -= yo;
    yo = min(c1, c);
    c1 -= yo;
    c -= yo;
    yo = min(b, b1);
    b -= yo, b1 -= yo;
    yo = min(a,a1); 
    a-=yo, a1-=yo; 
    ans-= (c1*2); 
    cout << ans << endl; 

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
