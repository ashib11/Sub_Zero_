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
    int n, a, q;
    cin >> n >> a >> q;
    string str;
    cin >> str;
    int pos = 0, neg = 0;
    for (int i = 0; i < q; ++i)
    {
        if (str[i] == '+')
            pos++;
        else
            neg++;
    }
    if (a >= n)
    {
        cout << "YES" << endl;
        return;
    }
    else if (a + pos - neg >= n)
    {
        cout << "YES" << endl;
    }
    else if (a + pos < n)
    {
        cout << "NO" << endl;
    }
    else
        cout << "MAYBE" << endl;
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