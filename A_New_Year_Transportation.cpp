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
int main()
{
    fastIO();
    int n, m; 
    cin >> n >> m; 
    vector<int> v(n+1); 
    for(int i =1 ; i <= n ; ++i){
        cin >> v[i]; 
    }
    int i = 1; 
    while(i<m){
        i+= v[i]; 
    }
    if(i==m) cout << "YES" << endl; 
    else cout << "NO" << endl; 
    return 0;
}