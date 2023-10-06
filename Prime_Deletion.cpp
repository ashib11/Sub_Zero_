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
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == '1' || a[i] == '3' || a[i] == '7')
        {
            for (int j = i + 1; j < a.size(); ++j)
            {
                if (a[j] == '1' || a[j] == '3'|| a[j] == '7')
                {
                    cout << a[i] << a[j] << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
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