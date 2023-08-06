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
const int MOD = 1e9 + 7;
int main()
{
    fastIO();
    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        ull n;

        cin >> n;
        ull ans = (n*(n+1)*(n+2))/6 ;
       cout << ans %MOD << endl; 
    }
    return 0;
}