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
    string str;
    cin >> str;
    int sz = str.size();
    if (sz < 26)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i <= (sz - 26); ++i)
    {
        bool flag = true;
        vector<int> indx(26, 0);
        string temp = str.substr(i, 26);
        for (auto it : temp)
        {
            if (it != '?')
            {
                indx[it - 'A']++;
                if (indx[it - 'A'] > 1)
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            for (int j = i; j < (i + 26); ++j)
            {
                if (str[j] == '?')
                {
                    for (int k = 0; k < 26; ++k)
                    {
                        if (indx[k] == 0)
                        {
                            str[j] = char(k + 'A');
                            indx[k] = 1;
                            break;
                        }
                    }
                }
            }
        }

        if (flag)
        {
            for (int i = 0; i < sz; ++i)
            {
                if (str[i] == '?')
                    str[i] = 'X';
            }

            cout << str << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    fastIO();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
