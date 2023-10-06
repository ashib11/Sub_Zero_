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
    int arr[10000];
    int mx = - 1; 
    int l = 1e5; 
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arr[x]++;
        mx = max(mx,x); 
        l = min(l,x); 
    }
    for(int i =l; i<= mx+1; ++i){
        if(arr[i]==0) {
            cout << i << endl; 
            return; 
        }
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}