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
    for (int i = 1; i < n; ++i)
    {
        if (isalpha(str[i]) and isalpha(str[i - 1]) and str[i] == str[i - 1])
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (str[i] == '?')
        {
            if (i)
            {
                for (char x = 'a'; x <= 'c'; ++x)
                {
                    if (str[i + 1] != x and str[i - 1] != x)
                    {
                        str[i] = x;
                    }
                }
            }
            else
            {
                for (char x = 'a'; x <= 'c'; ++x)
                {
                    if (str[i + 1] != x)
                    {
                        str[i] = x;
                    }
                }
            }
        }
    }
    if (str[n - 1] == '?')
    {
        for (char x = 'a'; x <= 'c'; ++x)
        {
            if (str[n-2] != x)
            {
                str[n-1] = x;
            }
        }
    }
    cout << str << endl;
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
