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
bool isGood(int n)
{
    if (n == 1)
        return true;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; ++i)
    {
        int dig = str[i] - '0';
        // cout << dig << endl; 
        if (isGood(dig))
        {
            // cout << 'w'<< endl; 
            cout << 1 << endl;
            cout << dig << endl;
            return;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int dig = (str[i]-'0') * 10 + str[j]-'0';
            // cout << dig << endl; 
            if (isGood(dig))
            {
                cout << 2 << endl;
                cout << dig << endl;
                return;
            }
        }
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
