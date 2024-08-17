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
    vector<bool> nisi(n, false);
    deque<string> ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (nisi[i] == false)
        {
            for (int j = i + 1; j < n; ++j)
            {
                bool isGood = true;
                if (nisi[j] == false)
                {
                    for (int k = 0; k < m; ++k)
                    {
                        if (v[i][k] != v[j][m - 1 - k])
                        {
                            isGood = false;
                            break;
                        }
                    }
                    if (isGood)
                    {
                        ans.push_back(v[i]);
                        ans.push_front(v[j]);
                        nisi[i] = true;
                        nisi[j] = true;
                        break;
                    }
                }
            }
        }
    }
    map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {
        if (nisi[i] == false)
        {
            bool isGood = true;
            for (int k = 0; k < m; ++k)
            {
                if (v[i][k] != v[i][m - k - 1])
                {
                    isGood = false;
                    break;
                }
            }
            if (isGood)
            {
                mp[v[i]]++;
            }
        }
    }
    string middle = "";
    int mx = 0;
    for (auto [a, b] : mp)
    {
        if (b > mx)
        {
            middle = a;
            mx = b;
        }
    }
    string tmp = middle;
    for (int i = 1; i < mx; ++i)
    {
        middle += tmp;
    }
    int val = middle.size() + (ans.size() * m);
    cout << val << endl;
    int k = (ans.size()) / 2;
    bool yo = true;
    for (int i = 0; i < (int)ans.size(); ++i)
    {
        if (k == i)
        {
            cout << middle;
            yo = false;
        }
        cout << ans[i];
    }
    if (yo)
    {
        cout << middle ; 
    }
    cout << endl;
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
