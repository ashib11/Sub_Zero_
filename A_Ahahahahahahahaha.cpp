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
    vector<int> v(n);
    int zr = 0, on = 0;
    for (auto &i : v)
    {
        cin >> i;
        if (i)
            on++;
        else
            zr++;
    }
    if (zr >= (n / 2))
    {
        cout << zr << endl;
        for (int i = 0; i < zr; ++i)
        {
            cout << "0 ";
        }
        cout << endl;
        return;
    }
    if (on % 2)
        on--;
    cout << on << endl;
    for (int i = 0; i < on; ++i)
    {
        cout << "1 ";
    }
    cout << endl;
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
