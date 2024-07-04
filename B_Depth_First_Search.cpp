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
const int N = 1e5;
vector<int> g[N];
int level[N];
bool vis[N];
int inD[N], outD[N];
int cnt=0;  
void dfs(int s){
    vis[s] = true; 
    inD[s] = ++cnt;
    for(auto child : g[s]){
        if(!vis[child]){
            dfs(child); 
        }
    }
    outD[s] = ++cnt; 
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int u, k;
        cin >> u >> k;
        for (int i = 0; i < k; ++i)
        {
            int v;
            cin >> v;
            g[u].push_back(v);
        }
    }
    for(int i=1 ; i <= n; ++i){
        if(vis[i]==false){
            dfs(i); 
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << i << ' ' << inD[i] << ' ' << outD[i] << endl; 
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
