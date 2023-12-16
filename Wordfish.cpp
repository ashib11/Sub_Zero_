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
}

int main()
{
    fastIO();
    string s;
    while (cin >> s)
    {
        vector<string> v(30);
        v[11] = s;
        for (int i = 12; i < 22; ++i)
        {
            next_permutation(all(s));
            v[i] = s;
        }
        s = v[11];
        for (int i = 10; i >= 1; --i)
        {
            prev_permutation(all(s));
            v[i] = s;
        }
        int mx = -1;
        string ans;
        for (int i = 1; i < 22; ++i)
        {

            int temp = 1e8;
            for (auto it : v[i])
            {
                cout << it << endl;
                int dif = abs(it - (++it));
                temp = min(dif, temp);
            }
            if (temp > mx)
            {
                mx = temp;
                ans = v[i];
            }
            // cout << v[i] << " " << temp << endl;
        }
        cout << ans << mx << endl;
    }
    return 0;
}
