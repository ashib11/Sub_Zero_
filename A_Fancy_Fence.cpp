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
    int a;
    cin >> a;
    if(!(360%(180-a)))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}