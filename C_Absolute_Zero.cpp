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
    vector<ll> v(n);
    set<ll> st; 
    int od=0, ev=0; 
  
    for (auto &i : v)
    {
        cin >> i;
        if(i%2) od++; 
        else ev++; 
        st.insert(i); 
    }
    if(st.size()==1){
        if(*st.begin()==0){
            cout << 0 << endl << endl; 
            return; 
        }
        else {
            cout << 1 << endl; 
            cout << *st.begin() << endl; 
            return; 
        }
    }
    if(od!=n and ev!=n){
        cout << -1 << endl; 
        return; 
    }
    vector<int> ans;
    for (int i = 1; i <= 40; ++i)
    {
        sort(all(v));
        ll a = v[0];
        ll b = v[n-1];
        ll x = (a+b)/2; 
        ll done = true; 
        ans.push_back(x); 
        for(int i=0; i < n; ++i){
            v[i] = abs(v[i]-x);
            if(v[i]!=0) done = false; 
            // cout << v[i] << " ";
        }
        // cout << endl; 
        if (done)
        {
            cout << ans.size() << endl;
            for (auto it : ans)
                cout << it << ' ';
            cout << endl;
            return;
        }
    }
    bool done = true;
    for (auto &i : v)
    {
        if (i != 0)
            done = false;
    }
    if (done == false)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.size() << 'h' << endl;
        for (auto it : ans)
        {
            cout << it << ' ';
        }
        cout << endl;
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