#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define i_mn INT_MIN
#define i_mx INT_MAX
#define p_b push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define getln(s) geline(cin, s)
#define point(x, d) fixed << setprecision(d) << x
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int fun(int n) {
    if(n==1) return 0; 
    if(n==2) return 1; 
    return fun(n-1) + fun(n-2); 
}
int main()
{
    fastIO();
    int n;
    cin >> n; 
    cout << fun(n) << endl; 
    return 0;
}