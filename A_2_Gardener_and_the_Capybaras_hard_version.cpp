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
    string str;
    cin >> str;
    int n = str.size();
    bool f = false;
    int k = -1;
    string tmp = "";
    for (int i = 1; i < n - 1; i++)
    {
        if (str[i] == 'a')
        {
            f = true;
            k = i;
            break;
        }
    }
    if (f)
    {
        for (int i = 0; i < k; ++i)
        {
            cout << str[i];
        }
        cout << ' ' << str[k] << ' ';
        for (int i = k + 1; i < n; ++i)
            cout << str[i];
        cout << endl;
    }
    else
    {
        for (int i = 1; i < n - 1; ++i)
        {
            tmp += str[i];
        }
        cout << str[0] << ' ' << tmp << ' ' << str[n - 1] << endl;
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
