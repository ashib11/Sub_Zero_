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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    set<int> st;
    int l = 0, r = n, cnt = 0;
    int ansl;
    int ans = -1e8;
    for (int i = n - 1; i >= 0; --i)
    {
        st.insert(v[i]);
        l = i+1;
        cnt = (int)st.size();

        int val = r - l - cnt;

        if (val > ans)
        {

            ans = val;
            ansl = l ;
        }
    }
    // cout << ans << endl;
    cout << ansl << " " << r << endl;
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
