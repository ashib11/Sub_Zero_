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
    int one = 0, two = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        x == 1 ? one++ : two++;
    }
    if (one == n)
    {
        for (int i = 0; i < n; ++i)
            cout << "1 ";
    }
    else if (two == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << "2 ";
        }
    }
    else
    {
        cout << "2 1";
        one--, two--;
        for (int i = 0; i < two; ++i)
        {
            cout << " 2";
        }
        for (int i = 0; i < one; ++i)
        {
            cout << " 1";
        }
    }
    cout << endl;
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
