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
    int a, b;
    cin >> a >> b;
    string str;
    cin >> str;
    int n = str.size();
    map<char, int> mp;
    mp['0'] = a, mp['1'] = b, mp['?'] = 0;
    for (auto it : str)
    {
        if (it == '0')
            mp[it]--;
        else if (it == '1')
            mp[it]--;
        else
            mp[it]++;
    }

    for (int i = 0; i < n / 2; ++i)
    {
        int lst = n - i - 1;
        if (str[i] != str[lst])
        {

            if (str[i] == '?' and str[lst] != '?')
            {

                str[i] = str[lst];
                if (mp[str[i]] > 0)
                    mp[str[i]]--;
                else
                {
                    cout << "-1" << endl;
                    return;
                }
            }
            else if (str[i] != '?' and str[lst] == '?')
            {
                str[lst] = str[i];
                if (mp[str[i]] > 0)
                    mp[str[i]]--;
                else
                {
                    cout << "-1" << endl;
                    return;
                }
            }
        }
    }
    for (int i = 0; i < (n / 2); ++i)
    {
        int lst = n - i - 1;
        if (str[i] != str[lst])
        {
            cout << "-1" << endl;
            return;
        }
        else
        {
            if (str[i] == '?' and str[lst] == '?')
            {
                if (mp['0'] >= 2)
                {
                    str[i] = '0';
                    str[lst] = '0';
                    mp['0'] -= 2;
                }
                else if (mp['1'] >= 2)
                {
                    str[i] = '1';
                    str[lst] = '1';
                    mp['1'] -= 2;
                }
                else
                {
                    cout << "-1" << endl;
                    return;
                }
            }
        }
    }
    if (str[n / 2] == '?')
    {
        if (mp['0'] > 0)
        {
            str[n / 2] = '0';
        }
        else if (mp['1'] > 0)
        {
            str[n / 2] = '1';
        }
        else
        {
            cout << "-1" << endl;
            return;
        }
    }
    if (mp['0'] < 0 or mp['1'] < 0)
    {
        cout << "-1" << endl;
    }
    else
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
