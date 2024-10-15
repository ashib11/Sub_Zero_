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
    string str;
    cin >> str;
    int z = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == '0')
            z++;
    }
    if (z == 0)
    {
        cout << "DRAW" << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << "BOB" << endl;
        return;
    }
    else
    {
        if (str[n / 2] == '0')
        {
            z--;
            if (z == 0)
            {
                cout << "BOB" << endl;
            }
            else
                cout << "ALICE" << endl;
            return;
        }

        cout << "BOB" << endl;
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
