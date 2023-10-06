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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];

    int x = *max_element(v.begin() + 1, v.end());
    // cout << x << endl; 
    if (x < v[0])
        cout << 0 << endl;
    else
        cout << x + 1 - v[0] << endl;
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}