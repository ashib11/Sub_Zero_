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

    ll n;
    cin >> n;
    vector<ll> v(n); // Use ll (long long) instead of int
    v[0] = 2;
    v[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        v[i] = v[i - 1] + v[i - 2];
        // cout << v[i] << endl; 
    }
    cout << v[n ] << endl;
    return 0;
}
