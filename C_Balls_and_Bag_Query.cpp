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
    int q;
    cin >> q;
    set<int> st;
    map<int, int> mp;
    while (q--)
    {
        int x;
        cin >> x;
        if (x != 3)
        {
            int b;
            cin >> b;
            if (x == 1)
            {
                st.insert(b);
                mp[b]++;
            }
            else
            {
                if (mp[b] == 1)
                {
                    auto it = st.find(b);
                    st.erase(it);
                    mp[b]--;
                }
                else
                    mp[b]--;
            }
        }
        else
        {
            cout << st.size() << endl;
           
        }
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
