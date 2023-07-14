#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define ull unsigned long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();
    int n;
    cin >> n;
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum1 += x;
    }
    for (int i = 0; i < n - 1; ++i)
    {
        int x;
        cin >> x;
        sum2 += x;
    }
    for (int i = 0; i < n - 2; ++i)
    {
        int x;

        cin >> x;
        sum3 += x;
    }
    cout << sum1 - sum2 << endl;
    cout << sum2 - sum3 << endl;
    return 0;
}