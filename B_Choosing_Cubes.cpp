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
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    ll tgt = v[f - 1];
    sort(allr(v));
    if(tgt < v[k-1]){
        cout << "NO" << endl; 
        return; 
    }
    if (tgt >= v[k - 1])
    {
        if (n > 1 and tgt == v[k])
        {
            cout << "MAYBE" << endl;
        }
        else
            cout << "YES" << endl;
    }
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
