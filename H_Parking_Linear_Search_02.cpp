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
void solve() {
        int n;
        cin >> n; 
        vector<int> v(n); 
        for(int i =0 ; i < n; ++i) cin >> v[i]; 
        sort(v.begin(), v.end()) ; 
        cout << (v[n-1]-v[0])*2 << endl; 
}
int main()
{
    fastIO();
    int tc; 
    cin >> tc;
    while(tc--) solve(); 
    return 0;
}