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
    map<char, int> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[str[i]]++;
    }
    if (n % 2 == 0)
    {
        vector<char> tmp;
        for (auto [a, b] : mp)
        {
            if (b >= n / 2)
                tmp.push_back(a);
        }
        map<char, int> yo;
        for (int i = 1; i < n; i += 2)
        {
            for (auto it : tmp)
            {
                if (it == str[i])
                    yo[it]++;
            }
        }
        int mx = -1;
        char srch;
        for (auto [a, b] : yo)
        {
            if (b > mx)
            {
                mx = b;
                srch = a;
            }
        }
        int ans = 0;
        cout << srch << endl; 
        for (int i = 1; i < n; i += 2)
        {
            if (str[i] != srch)
                ans++;
        }
        cout << ans << endl;
    }
    else
    {
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
