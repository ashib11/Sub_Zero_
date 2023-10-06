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
    bool arr[101][101]={0};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int a1, b1, c1, d1;
        cin >> a1 >> b1 >> c1 >> d1;
        for (int k = a1; k < b1; ++k)
        {
            for (int j = c1; j < d1; ++j)
            {
                arr[k][j] = 1;
            }
        }
    }
    ll cnt =0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << arr[i][j] << " " ; 
            if(arr[i][j]==1) cnt++; 
    
        }
            cout << endl; 
    }
    cout << cnt << endl; 
}
int main()
{
    fastIO();
    int tc;
   tc = 1 ; 
    while (tc--)
    {
        solve();
    }
    return 0;
}