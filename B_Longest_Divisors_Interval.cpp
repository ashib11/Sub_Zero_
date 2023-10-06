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
void solve()
{
    ll n;
    cin >> n;
    int cnt =0 ;
    int ans =0 ; 
    int N = 1e5; 
    for (int i = 1; i <= N; ++i)
    {
        if (n % i == 0)
            cnt++;
        else {
            ans = max(cnt, ans) ; 
            cnt =0 ; 
        }
    }
    cout << max(ans,cnt) << endl; 
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}