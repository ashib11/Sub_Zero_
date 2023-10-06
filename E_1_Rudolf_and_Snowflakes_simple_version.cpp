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
set<ll> s;
int N = 1e6;
void preCall()
{
    for (int i = 2; i * i <= N; ++i)
    {
        ll val = 1+i; 
        ll series = i*i; 
        for (int j = 2; j <= 30; ++j)
        {
            val += series;
            if (val > (int)1e6)
                break;
            s.insert(val);
            series *= i;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    if (s.count(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    fastIO();
    int tc;
    preCall();
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}