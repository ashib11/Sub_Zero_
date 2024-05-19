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
    string str;
    cin >> str;
    int fa = -1, fb = -1, fc = -1;
    vector<int> v[3];
    for (auto it : v)
    {
        for (auto x : it)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    cout << endl; 
    for (int i = 0; i < n; ++i)
    {
        v[str[i] - 'a'].push_back(i);
    }
    int cntb = 0, cntc = 0;
    int indx = upper_bound(all(v[1]), v[0][0]) - v[1].begin();
    if (indx >= v[1].size())
    {
        cout << "0" << endl;
        return;
    }
    int indx2 = upper_bound(all(v[2]), v[1][indx]) - v[2].begin();
    if (indx2 >= v[2].size())
    {
        cout << "0" << endl;
        return;
    }
    else
    {
        cntc = v[2].size() - v[2][indx2] + 1;
    }
    cout << indx << ' ' << indx2 << endl;
    cout << cntc << endl;
    // cout << fa << ' ' << fb << ' ' << fc << endl;
    // int a = 0, b = 0, c = 0;
    // if (fc > fb and fb > fa)
    // {
    //     for (int i = fa; i < n; ++i)
    //     {
    //         if (str[i] == 'a')
    //             a++;
    //         else if (str[i] == 'b')
    //             b++;
    //         else if (str[i] == 'c')
    //             c++;
    //     }
    //     cout << min({a, c}) << endl;
    // }
    // else
    //     cout << 0 << endl;
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
