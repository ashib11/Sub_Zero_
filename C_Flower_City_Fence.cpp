#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"
#define all(v) v.begin(), v.end()
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for (int i = 1; i <=n; ++i)
        cin >> v[i];
    if (v[1] != n)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> b;
    for (int i = n ; i >= 1; --i)
    {
        while (b.size() < v[i])
        {
            b.push_back(i);
        }
    }
    for(int i =1 ; i <= n; ++i){
        // cout << v[i] << " " << b[i-1] << endl; 
        if(v[i]!=b[i-1]){
            cout << "NO" << endl; 
            return; 
        }
    }
    cout << "YES" << endl;
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}