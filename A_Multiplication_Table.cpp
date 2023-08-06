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
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {

        if (m % i == 0 && m / i <= n)
        {
            // cout << i << endl; 
            count++;
        }
     }
    cout << count << endl;
    return 0;
}