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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    string ans = "";
    for (int i = 0; i < 50; ++i)
    {
        ans += 'a';
    }
    vector<string> yo;
    yo.push_back(ans);
    for (int i = 0; i < n; ++i)
    {
        string tmp = yo.back();
        string yoyo = "";
        for (int j = 0; j < v[i]; ++j)
        {
            yoyo += tmp[j];
        }
        for (int j = v[i]; j < 50; ++j)
        {
            char x = tmp[j];
            if (tmp[j] == 'z')
                x = 'a';
            else
                x++;
            yoyo += x;
        }
        yo.push_back(yoyo);
    }

    for (auto it : yo)
    {
        cout << it << endl;
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
