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
    bool check = true;
    if (a == "()")
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i < a.size(); ++i)
    {
        if (a[i] == a[i - 1])
        {
            check = false;
        }
    }

    if (check)
        cout << string(a.size(), '(') + string(a.size(), ')');
    else
        for (int i = 0; i < a.size(); ++i)
            cout << "()";

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