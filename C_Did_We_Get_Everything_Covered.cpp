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
    int n, k, m;
    cin >> n >> k >> m;
    string str;
    cin >> str;
    set<char> s;
    string ans;
    for (auto it : str)
    {
        s.insert(it);
        if (s.size() == k)
        {
            ans += it;
            s.clear();
        }
    }
    if (ans.size() < n)
    {
        cout << "NO" << endl;
        char ch;
        for (char i = 'a'; i <= 'z'; ++i)
        {
            if (!s.count(i))
            {
                ch = i; break; 
            }
        }
        while (ans.size() < n)
        {
            ans += ch;
        }
        cout << ans << endl;
    }
    else
        cout << "YES" << endl;
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
