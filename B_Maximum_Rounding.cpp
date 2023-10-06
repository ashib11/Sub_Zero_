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
    int indx = a.size();
    int car = 0;
    for (int i = a.size() - 1; i >= 0; --i)
    {
        if (a[i] + car >= '5')
        {
            indx = i;
            car = 1;
        }
        else
        {
            a[i] += car;
            car = 0;
        }
    }
    for (int i = indx; i < a.size(); ++i)
    {
        a[i] = '0';
    }
    if (car)
    {
        a = '1' + a;
    }
    cout << a << endl;
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