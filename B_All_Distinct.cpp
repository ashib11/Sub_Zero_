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
    int n;
    cin >> n;
    set<int> d;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        d.insert(x);
    }
    int s = n - d.size();
    if (s % 2 != 0)
    {
        s++;
    }
    cout << n - s << endl;
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