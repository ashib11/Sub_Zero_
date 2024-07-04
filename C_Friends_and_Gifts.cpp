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
    map<int, int> mp;
    vector<int> z, left;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x == 0)
            z.push_back(i);
        mp[x] = 1;
        v[i] = x;
    }
    for (int i = 1; i <= n; ++i)
        if (!mp[i])
            left.push_back(i);
    
    for (int i = 0; i < (int)z.size(); ++i)
    {
        if (z[i] == left[i])
        {
            if (i + 1 < z.size())
            {
                swap(left[i], left[i + 1]);
            }
            else
                swap(left[i], left[i - 1]);
        }
    }
    for(int i= 0; i < (int)z.size(); ++i){
        int indx = z[i]; 
        v[indx] = left[i]; 
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
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
