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
int main()
{
    fastIO();
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 0; i <= n; ++i)
    {
        int b = n - (i * i);
        if ((m == (b * b) + i)&& b>=0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}