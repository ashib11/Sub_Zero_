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
    int n, m;
    cin >> n >> m;
    deque<int> dq;
    ll mal = 1;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    vector<ll> v;
    string str;
    cin >> str;
    for (auto it : str)
    {
        int x;
        if (it == 'L')
        {
            x = dq.front();
            dq.pop_front();
        }
        else if (it == 'R')
        {
            x = dq.back();
            dq.pop_back();
        }
        v.push_back(x); 
        // cout << mal << ' ' << mal % m << ' ' << x << endl;
    }
    reverse(all(v)); 
    vector<ll> ele; 
    for(auto it : v){
        mal*=it; 
        mal%=m;
        ele.push_back(mal);
    }
    reverse(all(ele));
    for(auto &it: ele)
        cout << it << " ";
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
