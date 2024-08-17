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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (auto &i : v)
        cin >> i;
    if (n == 1)
    {
        cout << v[0] << endl;
        return;
    }
    vector<int> checker(n, 0);
    string ans = "";
    int lst_col = 0;
    for (int col = 0; col < m; ++col)
    {
        map<char, int> fre;
        for (int row = 0; row < n; ++row)
        {
            fre[v[row][col]]++;
        }
        if (fre.size() == 1)
        {
            auto it = fre.begin();
            char key = it->first;
            ans += key;
            continue;
        }
        else
        {
            int mx = -1;
            char yo;
            for (auto [a, b] : fre)
            {
                if (b > mx)
                {
                    yo = a;
                    mx = b;
                }
            }
            ans += yo;
            lst_col = col;
            for (int row = 0; row < n; ++row)
            {
                if (v[col][row] != yo)
                {
                    checker[row]++;
                }
            }
            break;
        }
    }

    set<string> all_strings;
    for (int i = 0; i < n; ++i)
    {
        if (checker[i])
        {
            string tmp = ans;
            for (int j = lst_col + 1; j < m; ++j)
            {
                tmp += v[i][j];
            }
            all_strings.insert(tmp);
        }
    }

    for (auto it : all_strings)
    {
        ans = it;
        vector<int> final_check(n, 0);

        for (int c = 0; c < m; ++c)
        {
            for (int r = 0; r < n; ++r)
            {
                if (v[r][c] != ans[c])
                {
                    final_check[r]++;
                }
            }
        }
        bool pls = true;
        for (auto it : final_check)
        {
            if (it > 1)
            {
                pls = false;
            }
        }
        if (pls)
        {
            cout << ans << endl;
            return;
        }
    }
    cout << -1 << endl;
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
