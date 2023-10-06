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
int max_of_four(int a, int b, int c, int d){
    return max(max(a,b),max(c,d)); 
}
void solve()
{
    int a, b , c , d; 
    cin >> a >> b >> c >> d; 
    cout << max_of_four(a,b,c,d) << endl; 
 
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