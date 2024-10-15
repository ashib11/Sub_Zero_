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
    string ans = string(n, '9');
    string num;
    for (int i = n - 1; i >= 0; --i)
    {
        int x = (ans[i] - str[i]);
        string tmp = to_string(x);
        num = tmp + num;
    }

    if (num[0] == '0')
    {
        string ans1 = string(n + 1, '1');
        string yo;
        int carr = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            int a = ans1[i + 1] - '0';
            int b = str[i] - '0';
            int dif = (a - b - carr);
            if (dif < 0)
            {
                carr = 1;
                dif += 10;
            }
            else
            {
                carr = 0;
            }
            yo  = to_string(dif) + yo; 
        }
        cout << yo << endl;
    }
    else
    {
        cout << num << endl;
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
