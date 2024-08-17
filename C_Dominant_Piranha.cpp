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
    set<int> st;

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        st.insert(v[i]);
    }
    if (st.size() == 1)
    {
        cout << "-1" << endl;
        return;
    }
    int mx = *max_element(all(v));
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == mx)
        {
            if (i + 1 < n and v[i + 1] < mx)
            {
                cout << i + 1 << endl;
                return;
            }
            else if (i - 1 >= 0 and v[i - 1] < mx)
            {
                cout << i + 1 << endl;
                return;
            }
        }
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
