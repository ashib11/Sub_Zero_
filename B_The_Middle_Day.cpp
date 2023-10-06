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
    vector<int> month;
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        month.push_back(x);
        sum += x;
    }
    int m, d = 0;
    int fnd = (sum + 1) / 2;
  
    for (int i = 0; i < n; ++i)
    {
        m = i + 1;
        d = 0;
        while (month[i] != 0)
        {
            month[i]--;
            d++;
            fnd--;
            if (fnd == 0)
            {
                cout << m << " " << d << endl;
                return;
            }
        }
    }
}
int main()
{
    fastIO();
    int tc;
    tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}