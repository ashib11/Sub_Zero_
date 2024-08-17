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
    for (auto &i : v)
        cin >> i;
    vector<int> v1(k);
    for (auto &i : v1)
        cin >> i;
    sort(allr(v1));
    int j = 0;
    for (auto &i : v)
    {
        if (i == 0)
            i = v1[j++];
    }
    if (is_sorted(all(v)))
    {
        cout << "No" << endl;
    }
    else
        cout << "Yes" << endl;
    
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
