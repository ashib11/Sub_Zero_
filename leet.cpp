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
string mergeAlternately(string word1, string word2)
{
    string ans = "";
    int i = 0;
    for (; i < (int)min(word1.size(), word2.size()); ++i)
    {
        ans += word1[i];
        ans += word2[i];
    }
    if (word1.size() > word2.size())
    {
        for (int j = i; j < word1.size(); ++j)
        {
            ans += word1[j];
        }
    }
    else
    {
        for (int j = i; j < word2.size(); ++j)
        {
            ans += word2[j];
        }
    }
    return ans;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    string ans = mergeAlternately(a, b);
    cout << ans << endl;
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
