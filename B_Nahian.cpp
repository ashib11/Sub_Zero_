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
  string a; cin >> a; 
  for(int i =0 ;i < a.size(); ++i){
    if(a[i]=='7'){
        cout << "Yes" << endl; 
        return; 
    }
  }
  cout << "No" << endl; 
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