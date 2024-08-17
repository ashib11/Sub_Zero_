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
    if (str.size() <= 1)
    {
        cout << "NO" << endl;
        return;
    }
    string tmp = str.substr(0, 2);
    // cout << tmp << endl;
    if (tmp != "10")
    {
        cout << "NO" << endl;
        return;
    }
    bool f = false;
    string tmp2 = "0";
    for (int i = 2; i < (int)str.size(); ++i)
    {
        tmp2 += str[i];
        if (str[i] >= '1' and str[i] <= '9')
        {
            f = true;
        }
        else
        {
            if (f == false)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    int num = stoi(tmp2);
    if (num > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
