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
    int x = 2 * n - 1;
    ll sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= x; ++j)
        {
            sum += 1;
        }
        x -= 2;
    }
    sum*=2; 
    sum-=(2*n-1); 
    cout << sum << endl;
    return 0;
}