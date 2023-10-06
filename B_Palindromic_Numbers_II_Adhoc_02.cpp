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
    string a;
    cin >> a;
    string b = a;
    reverse(a.begin(), a.end());
    if (a == b) cout << "Yes\n"; 
    else cout << "No\n" ; 
       
}
int main()
{
    fastIO();
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
         cout << "Case " << i << ": "; 
        solve();
    }
    return 0;
}