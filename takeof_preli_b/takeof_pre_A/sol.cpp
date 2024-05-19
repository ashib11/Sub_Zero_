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
    ll n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; ++i)
    {
        str[i] = tolower(str[i]);
    }
    vector<ll> pre(n + 10, 0);
    set<char> st;
    for (int i = n - 1; i >= 0; --i)
    {
        st.insert(str[i]);
        pre[i] = st.size();
    }
    ll nq;
    cin >> nq;
    while (nq--)
    {
        ll l;
        cin >> l;
        cout << pre[l - 1] << ' ';
    }
    cout << endl; 
}

int main()
{
    fastIO();
    int tc = 1;
    cin >> tc;
    for(int i=1; i <=tc; ++i)
    {
        cout << "Case " << i << ": "; 
        solve();
    }
    return 0;
}
