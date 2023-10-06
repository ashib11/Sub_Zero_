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
    ll n;
    cin >> n;
    int k;
    cin >> k;
    while (k--)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
            n--;
    }
    cout << n << endl; 
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