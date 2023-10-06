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
const int N = 1e5+10; 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(N, 0);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        v[x] = i + 1;
    }

    int nq;
    cin >> nq;
    ll l = 0, r = 0;
    while (nq--)
    {
        int q;
        cin >> q;
        l += v[q];
        r += (n + 1LL - v[q]);
    }
    cout << l << " " << r << endl; 
}
int main()
{
    fastIO();
    int tc = 1;
    while (tc--)
    {
        solve();
    }
    return 0;
}