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
    ll sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if(sum%5==0|| sum==0) cout << sum/5 << endl; 
    else cout << -1 << endl; 
    return 0;
}