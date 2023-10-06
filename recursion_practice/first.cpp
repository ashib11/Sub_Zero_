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
void print(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    print(n - 1);
    // cout << n << " ";
}
void solve()
{
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    // cin >> tc;
    while (tc--)
    {
        print(5);
        solve();
    }
    return 0;
}