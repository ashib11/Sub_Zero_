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
    for (auto &i : v)
        cin >> i;
    sort(all(v));
    vector<int> ans;
    for (int i = 0; i < n / 2; ++i)
    {
        ans.push_back(v[i]);
        ans.push_back(v[n - i - 1]);
    }
    if(n%2){
        ans.push_back(v[(n+1)/2]); 
    }
    int cur_sum=0; 
    for(int i=0; i < n; ++i){
        if(cur_sum == ans[i]){
            cout << "NO" << endl;
            return; 
        }
        cur_sum+=ans[i];
    }
    cout << "YES" << endl; 
    for(auto it : ans){
        cout << it << ' ';
    }
    cout << endl; 
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