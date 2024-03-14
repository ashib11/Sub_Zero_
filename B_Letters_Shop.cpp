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
vector<int> v[26];
void preCal(string &str)
{
    for (int i = 0; i < str.size(); ++i)
    {

        v[str[i] - 'a'].push_back(i);
    }
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    preCal(str);
    int nq;
    cin >> nq;
    while (nq--)
    {
        string tmp;
        cin >> tmp;
        vector<int> last(26, -1);
        ll ans = 0;
        for (int i = 0; i < tmp.size(); ++i)
        {
            int indx = tmp[i] - 'a';
            ll val = *lower_bound(v[indx].begin(), v[indx].end(), last[indx] + 1);
            last[indx] = val; 
            ans = max(ans, val);
        }
        cout << ans + 1 << endl;
    }
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
