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
}
int main()
{
    fastIO();
    int n, d, r;
    while (cin >> n >> d >> r)
    {
        if (n == 0 && d == 0 && r == 0)
            break;
        vector<int> a, b;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x; 
            a.push_back(x);
        }
        sort(all(a));
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x; 
            b.push_back(x);
        }
        sort(all(b));
        reverse(all(b));
        ll pay = 0;
        for (int i = 0; i < n; ++i)
        {
            ll sum = a[i] + b[i];
            if (sum > d)
            {
                pay += (sum - d) * r;
            }
        }
        cout << pay << endl;
    }
    return 0;
}