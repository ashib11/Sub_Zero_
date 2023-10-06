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
}
int main()
{
    fastIO();
    int a, b;
    while (cin >> a >> b)
    {
        int ans = a;

        while (a / b != 0)
        {
            int x = a;
            x /= b;
            a = (a % b) + x;
            ans += x;
        }
        cout << ans << endl;
    }
    return 0;
}