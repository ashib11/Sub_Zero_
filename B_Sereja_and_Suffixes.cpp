#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int N = 1e5;
int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    set<int> s ;
    int ans[N];  
    for (int i = n - 1; i >= 0; --i)
    {
        s.insert(v[i]); 
        ans[i] = s.size(); 
    }
    for (int i = 0; i < m; ++i)
    {
        int l;
        cin >> l;
       cout << ans[l-1] << endl; 
    }
    return 0;
}