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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (auto &i : v)
    {
        cin >> i;
        i == 0 ? cnt++ : cnt;
    }
    if (cnt == n)
    {
        cout << 0 << endl;
        return;
    }
    int first = 0, last = n - 1;
    while (v[first] == 0)
        first++;
    while (v[last] == 0)
    {
        last--;
    }
    for (int i = first; i <= last; ++i)
        if (v[i] == 0)
        {
            cout << 2 << endl;
            return;
        }

    cout << 1 << endl;
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
