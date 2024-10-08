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
    vector<int> od, ev;
    for (auto &i : v)
    {
        cin >> i;
        if (i % 2)
            od.push_back(i);
        else
            ev.push_back(i);
    }
    if (od.size() % 2 == 0 and ev.size() % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(all(v));
        for (int i = 0; i < od.size(); ++i)
        {
            for (int j = 0; j < ev.size(); ++j)
            {
                if (abs(od[i] - ev[j]) == 1)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        cout << "NO" << endl;
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
