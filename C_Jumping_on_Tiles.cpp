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
    string str;
    cin >> str;
    int n = str.size();
    vector<pair<int, int>> vp;
    for (int i = 1; i < n - 1; ++i)
    {
        if (str[i] >= min(str[0], str[n - 1]) and str[i] <= max(str[0], str[n - 1]))
        {
            int val = str[i] - 'a';
            vp.push_back({val, i + 1});
        }
    }
    if (str[0] > str[n - 1])
        sort(allr(vp));
    else
        sort(all(vp));
        
    vp.push_back({(str[n - 1] - 'a'), n });;
    ll cost = abs((str[0] - 'a') - vp[0].first);
    for (int i = 0; i < vp.size() - 1; ++i)
    {
        cost += abs(vp[i].first - vp[i + 1].first);
    }
    cout << cost << " " << vp.size()+1 << endl;
    cout << 1 << ' ';
    for(auto it : vp)
        cout << it.second << ' ';
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
