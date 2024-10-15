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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp(n);
    for (auto &[a, b] : vp)
        cin >> a;
    for (auto &[a, b] : vp)
        cin >> b;
    sort(all(vp));
    vector<int> h; 
    for (auto [a, b] : vp)
        h.push_back(a);
    
    for (int i = n - 2; i >= 0; --i)
    {
        vp[i].second = min(vp[i].second, vp[i + 1].second);
    }
    int val=0; 
    while(k > 0){
        auto it  = upper_bound(all(h), k+val ) - h.begin(); 
        if(it >=n){
            cout << "YES" << endl; 
            return; 
        }
        val +=k; 
        k-=vp[it].second;
         
    }
    cout << "NO" << endl; 
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