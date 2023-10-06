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
    string a;
    cin >> a;
    int d = 0;
    int x = 0;
    for (int i = 1; i < a.size()+1; ++i)
    {
        if (a[i - 1] == 'R')
        {

            d = max(d, abs(x - i));
            x = i;
        }
    }
    int n = a.size() + 1;
    // cout << n << " " << d << " " << x << endl; 
    cout << max(d, (n - x))<< endl;
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