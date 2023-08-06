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
    int n, x;
    cin >> n >> x;
    int odd = 0, even = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a % 2 != 0)
            odd++;
        else
            even++;
    }
    if (odd >= 1 && !(x == n && odd % 2 == 0) && !(odd == n && x % 2 == 0))
    cout << "Yes" << endl ; 
    else cout << "No" << endl; 
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