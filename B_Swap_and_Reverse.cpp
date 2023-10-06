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
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    sort(all(a));
    if((n&1)&&(k&1)){
        swap(a[n/k + 1],a[n/k+2]); 
    }
    cout << a << endl;
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