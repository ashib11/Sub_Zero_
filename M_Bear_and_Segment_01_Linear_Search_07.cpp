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
    int Snx = -1, Edex = -1;
    bool z = false, o = false;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == '1')
        {
            Snx = i;
            break;
        }
    }

    for (int i = Snx + 1; i < a.size(); ++i)
    {
        if (a[i] == '1')
        {
            Edex = i;
        }
    }
    for (int i = Snx; i < Edex; ++i)
    {
        if (a[i] == '0')
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (Snx==-1 && Edex == - 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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