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
    int n, x, y;
    cin >> n >> x >> y;
    string str;
    cin >> str;
    int x1 = 0, y1 = 0;
    for (auto it : str)
    {

        if (it == 'R')
            x1++;
        else if (it == 'L')
            x1--;
        else if (it == 'U')
            y1++;
        else if (it == 'D')
            y1--;
        int dif = abs(y - y1);
        int dif1 = abs(x - x1);
        if (dif1 > dif)
        {
            if (x > x1)
                x--;
            else if (x1 >= x)
                x++;
        }
        else
        {
            if (y > y1)
                y--;
            else
                y++;
        }
        if (x1 == x and y1 == y)
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
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
