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
    int k = n*(n-1)/2;
    vector<int> v(k);  
    for(int i =0 ; i < k; ++i)  {
        cin >> v[i]; 
    }
    sort(v.begin(), v.end(), greater<int>() );
    for(int i =0 ; i < n;++i ){
        cout << max(v[i],v[i+1]) << " "; 
    } 
    cout << endl; 
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