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
const int S = 32;
ll markOne[S];
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        for (int j = 0; j < 32; ++j)
        {
            if (x & 1LL << j)
                markOne[j]++;
        }
    }
    ll sum = 0;
    for (ll j = 0; j < 32; ++j)
    {
        int one = markOne[j], zero = n - one; 
        sum+= (one*zero) * pow(2,j);  
        // cout << markOne[j] << " ";}
        cout << endl;
    }
    cout << sum << endl; 
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