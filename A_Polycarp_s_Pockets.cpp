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
    int arr[200]={0};
    int h  =- 1;
    for(int i =0 ; i < n; ++i){
        int x; 
        cin >> x; 
        arr[x]++; 
       
    }
   for(int i =0 ; i < 101; ++i){
         h = max(h,arr[i]);
   }
   cout << h << endl; 
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