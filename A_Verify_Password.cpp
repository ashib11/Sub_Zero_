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
    vector<char> a, b;
    bool alpha = true;
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (isalpha(str[i]))
        {
            alpha = false;
            b.push_back(str[i]);
        }
        if (alpha and str[i] >= '0' and str[i] <= '9')
        {
            a.push_back(str[i]);
        }
    }

    if (a.size() + b.size() == (int)str.size())
    {
        if (is_sorted(all(a)) and is_sorted(all(b)))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
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
