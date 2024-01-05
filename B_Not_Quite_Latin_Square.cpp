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
// find_by_order();
// order_of_key();

void solve()
{
    for (int i = 0; i < 3; ++i)
    {
        string str;
        cin >> str;
        bool a = false, b = false, c = false;
        for (int j = 0; j < 3; ++j)
        {
            if (str[j] == 'A')
            {
                a = true;
            }
            else if (str[j] == 'B')
                b = true;
            else if (str[j] == 'C')
                c = true;
        }

        if (!a)
        {
            cout << "A" << endl;
        }
        else if (!b)
            cout << "B" << endl;
        else if (!c)
            cout << "C" << endl;
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
