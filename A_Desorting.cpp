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
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    if (!(is_sorted(v.begin(), v.end())))
    {
        cout << 0 << endl;
        return ; 
    }
    int x = INT_MAX;

    for (int i = 1; i < n; ++i)
    {
        x = min(x, (v[i]-v[i-1])); 
    }
    cout << (x / 2 )+ 1 << endl; 
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