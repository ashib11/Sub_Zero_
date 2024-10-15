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
    string str; cin >> str;
    set<char> st;
    for (auto it : str) st.insert(it);
    string tmp = "";
    for (auto it : st) tmp += it;
    map<char, char> mp;
    for (int i = 0; i < tmp.size() / 2; ++i)
    {
        mp[tmp[i]] = tmp[tmp.size() - 1 - i];
        mp[tmp[tmp.size() - 1 - i]] = tmp[i];
    }
    if (tmp.size() % 2)
        mp[tmp[tmp.size() / 2]] = tmp[tmp.size() / 2];
    for (auto it : str)
        cout << mp[it] ;
    cout << endl;
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
