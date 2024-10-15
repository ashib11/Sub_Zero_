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
    int k = sqrt(n);
    if (k * k != n)
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (i < k)
        {
            if (str[i] == '0')
            {
                cout << "No" << endl;
                return;
            }
        }
        else if (i >= (n - k) and i < n)
        {
            if (str[i] == '0')
            {
                cout << "No" << endl;
                return;
            }
        }
        else if (i % k == 0 or i % k == (k - 1))
        {
            if (str[i] != '1')
            {
                cout << "No" << endl;
                return;
            }
        }
        else if (str[i] != '0')
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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
