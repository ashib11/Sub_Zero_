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
// (a>>b) a/(2^b)
//(a<<b) a*(2^b)
// find_by_order();
// order_of_key();
// n*(n-1)*(n-2)*(n-3)/3

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> male, female;

    for (int i = 0; i < n; ++i)
    {
        char g;
        cin >> g;
        int l, r;
        cin >> l >> r;
        if (g == ' M')
            male.push_back({l, r});
        else
            female.push_back({l, r});
    }
    sort(all(male)), sort(all(female));
    vector<bool> t((int)female.size(), false);
    int cnt = 0;
    for (int i = 0; i < (int)male.size(); ++i)
    {
        for (int j = 0; j < (int)female.size(); ++j)
        {
            if (t[j] == false)
                if ((male[i].first >= female[j].first and female[j].second <= male[i].second) or female[i].first >= male[j].first and male[j].second <= female[i].second)
                {
                    t[j] = true;
                    cnt += 1;
                }
        }
    }
    cout << cnt << endl;
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
