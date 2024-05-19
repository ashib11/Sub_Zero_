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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

ll const m = 1e9 + 7;

void solve()
{
    // r+g=y, g+b=c, r+b=m;
    int n = 3;
    vector<int> v(n);
    ll sum = 0;
    for (auto &i : v)
    {
        cin >> i;
        if (i > 0)
            sum += 1;
    }
    sort(allr(v)); 
    if (v[0] >= 2 and v[1] >= 2)
    {
        sum++;
        v[0]--, v[1]--;
    }
    if (v[0] >= 2 and v[2] >= 2)
    {
        sum++;
        v[0]--, v[2]--;
    }
    if (v[1] >= 2 and v[2] >= 2)
    {
        sum++;
        v[1]--, v[2]--;
    }
    cout << sum << endl; 
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
