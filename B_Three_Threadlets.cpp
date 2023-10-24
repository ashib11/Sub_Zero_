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
// find_by_key();
// value_by_key();
bool canMakeEqualLength(set<int> &s, int steps)
{
    if (steps == 3)
    {
        return s.size() == 1;
    }

    set<int> new_s;
    int max_length = *s.rbegin(); // Get the largest element

    for (int x : s)
    {
        if (x != max_length)
        {
            new_s.insert(x);
            new_s.insert(max_length - x);
        }
    }

    return canMakeEqualLength(new_s, steps + 1);
}
void solve()
{
    set<int> s;
    for (int i = 0; i < 3; ++i)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    if (canMakeEqualLength(s, 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
