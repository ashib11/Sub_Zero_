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
    int a, b, c;
    cin >> a >> b >> c;
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto it : str)
        mp[it]++;

    vector<char> ans(n, '1');
 
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'S')
        {
            if (a)
            {
                a--;
                ans[i] = 'R';
            }
        }
        else if (str[i] == 'R')
        {
            if (b)
            {
                --b;
                ans[i] = 'P';
            }
        }
        else if (str[i] == 'P')
        {
            if (c)
            {
                --c;
                ans[i] = 'S';
            }
        }
        else
        {
        }
    }
    // draw
    for (int i = 0; i < n; ++i)
    {
        if (ans[i] == '1')
        {
            if (str[i] == 'R')
            {
                if (a)
                {
                    
                    ans[i] = 'R', --a;
                }
            }
            else if (str[i] == 'P')
            {
                if (b)
                {
                    ans[i] = 'P', --b;
                }
            }
            else if (str[i] == 'S')
            {
                if (c)
                {
                    ans[i] = 'S', --c;
                }
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (ans[i] == '1')
        {
            if (a)
            {
                ans[i] = 'R', --a;
            }
            else if (b)
            {
                ans[i] = 'P', --b;
            }
            else if (c)
            {
                ans[i] = 'S', --c;
            }
        }
    }
    int win = 0;
    for (int i = 0; i < n; ++i)
    {
        if (str[i] == 'S')
        {
            if (ans[i] == 'R')
                win++;
        }
        else if (str[i] == 'P')
        {
            if (ans[i] == 'S')
                win++;
        }
        else if (str[i] == 'R')
        {
            if (ans[i] == 'P')
                win++;
        }
    }
    if (win >= (n + 1) / 2)
    {
        cout << "YES" << endl;
        for (auto it : ans)
        {
            cout << it;
        }
        cout << endl;
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
