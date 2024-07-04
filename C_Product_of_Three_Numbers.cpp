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
    ll n;
    cin >> n;
    ll tmp = n;
    vector<int> v;
    for (int i = 2; i * i < n; ++i)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (v.size() == 2)
            {
                v.push_back(n / i);
                break; 
            }
            n /= i;
        }
    }
   
    if (v.size() < 3)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << endl; ;
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
