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
    string a;
    cin >> a;
    if (a.size() == 1)
    {
        cout << a << endl;
        return;
    }
    vector<int> v;
    for (int i = 0; i < a.size(); i += 2)
    {
        int x = a[i] - 48;
        // cout << x << endl;
        v.push_back(x);
    }
    sort(all(v));
    for (int i = 0; i < v.size() - 1; ++i)
        cout << v[i] << "+";
    cout << v[v.size() - 1] << endl;
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