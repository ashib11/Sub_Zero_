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
    int x, y, n;
    cin >> x >> y >> n;

    int sum = n - 1;
    ll ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        ans += sum;
        sum--;
    }
    if (ans + x > y)
    {
        cout << "-1" << endl;
        return;
    }
    cout << x << " "; 
    vector<int> er;
    int limit = n - 1;
    int biygo = 1;
    while (limit--)
    {
        er.push_back(y);
        y -= biygo;
        biygo++;
    }
    reverse(all(er));

    for (int i = 0; i < er.size(); ++i)
        cout << er[i] << " ";
    cout << endl; 
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