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
    vector<int> a(n);
    bool one = false;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    if (s.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    sort(all(a));
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == a[0])
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); ++i)
        cout << b[i] << " ";
    cout << endl;
    for (int i = 0; i < c.size(); ++i)
        cout << c[i] << " ";
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